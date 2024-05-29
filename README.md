# Operating-System-Practicals

Networking
1. Write a client-server program using UDP connection. Exchange a message
between client and server and close both sockets.
2. Modify the UDP client-server program to handle multiple messages in a loop
until the client sends "exit".
3. Write a TCP client-server program where the server reverses the string
received from the client and sends it back.
4. Enhance the TCP reverse string server to handle multiple clients using
threads.
5. Write a TCP client-server program where the server checks whether a number
received from the client is even or odd.
6. Modify the TCP even/odd server to handle client connections in a loop until
the client sends "exit".
7. Write a TCP client-server program where the client sends a file name and the
server sends the contents of the file.
8. Modify the TCP file transfer server to send a list of available files to the client
before sending the requested file.
9. Write a UDP client-server program where the server echoes back any message
received from the client.
10. Create a UDP server that handles multiple clients using select() for I/O
multiplexing.

File Handling
1. Write a C program to open a text file and read the first 10 bytes.
2. Write a C program to create, open, and close a text file.
3. Write a C program to open a text file and read the last 10 bytes.
4. Write a C program to demonstrate the use of any 5 modes to open a text file.
5. Write a C program to write "Hello, World!" to a new text file.
6. Write a C program to append "End of File" to an existing text file.
7. Write a C program to read a file line by line and print each line.
8. Write a C program to copy the contents of one file to another.
9. Write a C program to count the number of lines in a text file.
10. Write a C program to check if a file exists before attempting to open it.

File Permissions and Commands
1. Write a C program to demonstrate the use of chmod system call to set file
permissions.
2. Write a C program to demonstrate the use of chown system call to change the
owner of a file.
3. Write a C program to demonstrate the use of stat system call to get file status.
4. Demonstrate any 5 file commands on ZSH shell (e.g., cat, head, tail, cp, rm).
5. Demonstrate any 5 directory commands on ZSH shell (e.g., ls, mkdir, cd, rmdir,
pwd).
6. Write a ZSH script to list all files in the current directory with their sizes.
7. Write a ZSH script to find and delete all files with a .tmp extension.
8. Write a ZSH script to display the last 20 lines of all .log files in a directory.
9. Write a ZSH script to rename all .txt files to .bak in a directory.
10. Write a ZSH script to create a backup of a directory.

System Calls and IPC
1. [Write a C program to illustrate the concept of dup system call.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/example.c)
<img width="605" alt="Screenshot 2024-05-29 at 10 55 41 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/754d562b-7f81-464f-8a90-6bd70418fead">

2. [Write a C program to illustrate the concept of fork system call.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/example2.c)
<img width="605" alt="Screenshot 2024-05-29 at 11 14 23 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/db60041e-bf0e-4264-a269-80eac6ec6087">

3. [Write a C program to illustrate the concept of wait system call.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/example3.c)
<img width="605" alt="Screenshot 2024-05-29 at 11 17 46 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/748fd014-921e-4e20-815b-6be00efaef7e">

4. [Write a C program to illustrate the concept of signal system call.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/example4.c)
<img width="605" alt="Screenshot 2024-05-29 at 11 24 02 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/2e6ffd89-46ac-42ae-a4d8-c0c6fd919f81">

5. [Write a C program to demonstrate inter-process communication (IPC) using pipes.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/example5.c)
<img width="605" alt="Screenshot 2024-05-29 at 11 26 15 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/e5682115-37e0-4d4e-bbc2-551a528ebee9">

6. [Write a C program to demonstrate IPC using message queues.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/example6.c)
<img width="605" alt="Screenshot 2024-05-29 at 11 28 25 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/b9bdb879-4332-4d93-a99c-762cf0fa4071">

7. [Write a C program to demonstrate IPC using shared memory.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/example7.c)
<img width="605" alt="Screenshot 2024-05-29 at 11 30 38 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/616fd319-4b50-457d-8f4b-6dea216504a8">

8. [Write a C program to demonstrate IPC using semaphores.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/example8.c)
<img width="605" alt="Screenshot 2024-05-29 at 11 32 40 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/ccb9deb5-fffd-4f37-8af8-a4b24da478d1">

9. [Write a C program to create a child process that runs a different program using exec().](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/example9.c)
<img width="605" alt="Screenshot 2024-05-29 at 11 34 30 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/9b9426cc-20a2-4a30-b630-6a17cb19430d">

10.[ Write a C program to handle the SIGINT signal and print a message when it is received.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/example10.c)
<img width="605" alt="Screenshot 2024-05-29 at 11 36 39 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/4675ebdd-5058-45aa-a400-ecb3c512f9fd">

Text Processing
1. [Demonstrate any 5 AWK commands on ZSH shell.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/data1.txt)
<img width="605" alt="Screenshot 2024-05-29 at 11 53 07 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/19b29b2b-e572-4529-8b26-2b5e8aa374b7">
<img width="605" alt="Screenshot 2024-05-29 at 11 57 18 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/07f739fc-222a-45cc-9132-78eb7d3f0541">
<img width="620" alt="Screenshot 2024-05-30 at 12 06 45 AM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/da656543-c06a-45d9-9ef6-4d131254efb8">
<img width="620" alt="Screenshot 2024-05-30 at 12 10 03 AM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/48badfd2-71de-49d0-ba69-89895013e777">
<img width="620" alt="Screenshot 2024-05-30 at 12 11 04 AM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/e92d343c-028c-4f29-bec0-8f4a87ed4829">

2. [Write an AWK command to print the second column of a file.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/data2.txt)
<img width="620" alt="Screenshot 2024-05-30 at 12 18 08 AM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/2c3b6e80-e8bd-4e6b-9ed6-1299d3a25553">

3. [Write an AWK command to print lines where the third column is greater than 50.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/data3.txt)
<img width="620" alt="Screenshot 2024-05-30 at 12 21 42 AM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/07c4f6ec-cf7e-48a6-b180-5c543f8951e0">

4. [Write an AWK script to sum the values in the first column of a file.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/numbers1.txt)
<img width="620" alt="Screenshot 2024-05-30 at 12 25 27 AM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/942f5b99-801a-4762-bda3-db8b017cfbf3">

5. [Write an AWK script to print the last column of each line in a file.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/data4.txt)
<img width="620" alt="Screenshot 2024-05-30 at 12 30 22 AM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/ae0c1aa4-79d6-42a2-a812-0813c8b33659">

6. [Demonstrate any 5 SED commands on ZSH shell.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/zsh.txt)
   
<img width="620" alt="Screenshot 2024-05-30 at 12 33 03 AM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/2c02f966-3100-4875-8d8a-f6a7ebfefc05">
<img width="620" alt="Screenshot 2024-05-30 at 12 33 03 AM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/8eaf6b3c-97f2-447a-9231-17981553bc98">



8. Write a SED command to replace all occurrences of "foo" with "bar" in a file.
9. Write a SED command to delete lines containing the word "error" in a file.
10. Write a SED command to insert a line of text before the third line of a file.
11. Write a SED command to append a line of text after the fifth line of a file.
