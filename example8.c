#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

#define NUM_SEMS 1 // Number of semaphores in the set

// Define union for semctl() function
union my_semun {
    int val;               // Value for SETVAL
    struct semid_ds *buf;  // Buffer for IPC_STAT, IPC_SET
    unsigned short *array; // Array for GETALL, SETALL
};

int main() {
    key_t key;
    int semid;
    struct sembuf sem_op;

    // Generate a unique key for the semaphore set
    key = ftok("/tmp", 'A');
    if (key == -1) {
        perror("ftok");
        exit(EXIT_FAILURE);
    }

    // Create a semaphore set with one semaphore
    semid = semget(key, NUM_SEMS, IPC_CREAT | 0666);
    if (semid == -1) {
        perror("semget");
        exit(EXIT_FAILURE);
    }

    // Initialize the semaphore to 1 (unlocked)
    union my_semun arg;
    arg.val = 1;
    if (semctl(semid, 0, SETVAL, arg) == -1) {
        perror("semctl");
        exit(EXIT_FAILURE);
    }

    // Acquire the semaphore
    sem_op.sem_num = 0;
    sem_op.sem_op = -1; // Decrement by 1 (lock)
    sem_op.sem_flg = 0;
    if (semop(semid, &sem_op, 1) == -1) {
        perror("semop");
        exit(EXIT_FAILURE);
    }

    printf("Semaphore acquired\n");

    // Simulate some critical section
    printf("Critical section\n");
    sleep(2); // Simulate some work in the critical section

    // Release the semaphore
    sem_op.sem_op = 1; // Increment by 1 (unlock)
    if (semop(semid, &sem_op, 1) == -1) {
        perror("semop");
        exit(EXIT_FAILURE);
    }

    printf("Semaphore released\n");

    // Remove the semaphore set
    if (semctl(semid, 0, IPC_RMID) == -1) {
        perror("semctl");
        exit(EXIT_FAILURE);
    }

    return 0;
}

