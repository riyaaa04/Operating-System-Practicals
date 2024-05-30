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
1. [Write a C program to open a text file and read the first 10 bytes.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/fh1.c)
<img width="393" alt="Screenshot 2024-05-30 at 8 19 04 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/b0aa9e9a-497d-4453-8db8-49f9c1751336">

2. [Write a C program to create, open, and close a text file.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/fh2.c)
<img width="393" alt="Screenshot 2024-05-30 at 8 21 39 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/13d83d8f-e3d9-44a7-a00f-987935ffafbe">

3. [Write a C program to open a text file and read the last 10 bytes.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/fh3.c)
<img width="393" alt="Screenshot 2024-05-30 at 8 43 59 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/8a3db5dc-0964-497a-8de2-d5d0f6c72820">

4. [Write a C program to demonstrate the use of any 5 modes to open a text file.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/fh4.c)
<img width="393" alt="Screenshot 2024-05-30 at 8 58 35 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/412e5cdc-05b5-4c67-9a7d-bbb9c90dbe76">

5. [Write a C program to write "Hello, World!" to a new text file.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/write_hello_world.c)
<img width="559" alt="Screenshot 2024-05-30 at 9 07 18 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/54bffc1f-b5de-4282-91dd-174b5b6e6da4">

6. [Write a C program to append "End of File" to an existing text file.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/append_eof.c)
<img width="559" alt="Screenshot 2024-05-30 at 9 19 49 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/d91af637-d5e3-45c5-98c4-11f3b020ffaa">

7. [Write a C program to read a file line by line and print each line.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/read_lines.c)
<img width="559" alt="Screenshot 2024-05-30 at 9 45 14 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/8e79a521-38a5-4271-abb9-8907ff41444e">

8. [Write a C program to copy the contents of one file to another.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/copy_file.c)
<img width="559" alt="Screenshot 2024-05-30 at 9 54 53 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/63af09a7-c4bb-485f-afde-5f30572d96c3">

9. [Write a C program to count the number of lines in a text file.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/count_lines.c)
<img width="559" alt="Screenshot 2024-05-30 at 10 04 59 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/a17a0041-df0f-4837-8cd4-0fc7eab98ff9">

10. [Write a C program to check if a file exists before attempting to open it.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/exist.c)
<img width="559" alt="Screenshot 2024-05-30 at 10 08 06 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/2ecc06c3-4852-48f2-9251-844252211334">


File Permissions and Commands
1. [Write a C program to demonstrate the use of chmod system call to set file permissions.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/fpc.c)
<img width="559" alt="Screenshot 2024-05-30 at 10 15 41 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/88c475d9-a573-4aa8-ab7b-040122ae1624">

2. [Write a C program to demonstrate the use of chown system call to change the owner of a file.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/fpc2.c)
<img width="559" alt="Screenshot 2024-05-30 at 10 18 27 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/43781e5a-55a1-4cf7-bb23-684c8ae20a5a">

3. [Write a C program to demonstrate the use of stat system call to get file status.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/fpc3.c)
<img width="559" alt="Screenshot 2024-05-30 at 10 22 20 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/1d7e30b8-a6a1-45bb-b0c6-c8448dc31b98">

4. Demonstrate any 5 file commands on ZSH shell (e.g., cat, head, tail, cp, rm).
<img width="559" alt="Screenshot 2024-05-30 at 10 27 28 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/032aee68-f4a3-4f64-84db-d8f1b02b97bb">

5. Demonstrate any 5 directory commands on ZSH shell (e.g., ls, mkdir, cd, rmdir, pwd).
<img width="559" alt="Screenshot 2024-05-30 at 10 30 14 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/1d14af0e-d310-4c48-b37a-0d088a6bc6be">
<img width="559" alt="Screenshot 2024-05-30 at 10 30 33 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/a8c13212-f292-466c-8f21-cb88cfd1c6d1">
<img width="559" alt="Screenshot 2024-05-30 at 10 31 57 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/06094937-9df4-4a8d-9383-f42757699960">
<img width="559" alt="Screenshot 2024-05-30 at 10 34 39 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/59bf5fee-a2c9-4c6a-bf55-362c80a3756f">
<img width="559" alt="Screenshot 2024-05-30 at 10 34 54 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/63ac2c03-b3d7-4281-888a-265b0aca0b49">

6. [Write a ZSH script to list all files in the current directory with their sizes.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/list_files.sh)
<img width="559" alt="Screenshot 2024-05-30 at 10 40 09 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/d972a136-0ad8-4a85-9e71-5d430c458840">

7.[ Write a ZSH script to find and delete all files with a .tmp extension.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/delete_tmp.sh) <br>
<img width="462" alt="Screenshot 2024-05-30 at 11 02 54 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/27f62ef6-c9c4-470f-844d-69bd2a08b8ed">

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
<img width="620" alt="Screenshot 2024-05-30 at 12 52 06 AM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/e1382ddc-460e-4b69-bed7-647e7b7259c5">
<img width="620" alt="Screenshot 2024-05-30 at 12 47 16 AM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/f5af0f91-ab08-4fe9-859a-80fd88c80bdd">
<img width="620" alt="Screenshot 2024-05-30 at 12 49 29 AM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/a3907828-e3ee-4884-b227-d6cc4607b005">
<img width="620" alt="Screenshot 2024-05-30 at 12 50 47 AM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/09e0ee20-46c5-4bb1-a667-8487f9d9cbf8">

7. [Write a SED command to replace all occurrences of "foo" with "bar" in a file.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/random.txt)
<img width="620" alt="Screenshot 2024-05-30 at 12 54 04 AM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/b6c05e3e-5c9e-4e40-99ae-99a051d4f8be">

8. [Write a SED command to delete lines containing the word "error" in a file.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/delete.txt)
<img width="620" alt="Screenshot 2024-05-30 at 12 56 50 AM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/ef59f018-2b0d-4210-815f-3f909f7c6a76">

9.[ Write a SED command to insert a line of text before the third line of a file.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/text.txt)
<img width="620" alt="Screenshot 2024-05-30 at 3 22 15 PM" src="https://github.com/riyaaa04/Operating-System-Practicals/assets/142775560/14adfc63-175e-49bf-a825-f4adc589383a">

10. [Write a SED command to append a line of text after the fifth line of a file.](https://github.com/riyaaa04/Operating-System-Practicals/blob/main/append.txt)
