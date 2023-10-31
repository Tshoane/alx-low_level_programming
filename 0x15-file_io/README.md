0x15. C - File I/O
Project Overview
This C project focuses on file input and output operations and aims to help you become proficient in handling file operations, using file descriptors, and understanding system calls. The project consists of three tasks, each of which contributes to your understanding of file I/O in C.

Learning Objectives
Upon completing this project, you should be able to:

Look for the right source of information online.
Create, open, close, read, and write files.
Understand what file descriptors are and their role in file operations.
Be familiar with the three standard file descriptors, their purposes, and their POSIX names.
Use I/O system calls such as open, close, read, and write.
Understand and utilize the flags O_RDONLY, O_WRONLY, and O_RDWR.
Comprehend file permissions and set them when creating a file with the open system call.
Distinguish between a system call and a function.
Requirements
Text editors allowed: vi, vim, emacs.
Compilation environment: Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
All code files should end with a newline.
A README.md file at the root of the project folder is mandatory.
Adherence to the Betty style, which will be checked using betty-style.pl and betty-doc.pl.
Avoid global variables.
Each code file can contain no more than 5 functions.
The only C standard library functions allowed are malloc, free, and exit. Other functions like printf, puts, calloc, and realloc are forbidden.
Allowed syscalls: read, write, open, close.
You can use _putchar, but you don't need to push _putchar.c; it will be provided by the grading system.
Task Descriptions
0. Tread lightly, she is near
Create a function that reads a text file and prints its content to the POSIX standard output.
Prototype: ssize_t read_textfile(const char *filename, size_t letters);
The function should read and print the specified number of letters.
It should return the actual number of letters read and printed.
If the file cannot be opened or read, return 0.
If filename is NULL, return 0.
If writing fails or doesn't write the expected number of bytes, return 0.
1. Under the snow
Create a function that creates a file and writes text content to it.
Prototype: int create_file(const char *filename, char *text_content);
The function should return 1 on success and -1 on failure.
If the file cannot be created, written to, or if writing fails, return -1.
The created file must have the permissions: rw-------. If the file already exists, do not change the permissions.
If filename is NULL, return -1.
If text_content is NULL, create an empty file.
2. Speak gently, she can hear
Create a function that appends text at the end of a file.
Prototype: int append_text_to_file(const char *filename, char *text_content);
The function should return 1 on success and -1 on failure.
If the file does not exist, return -1. If you don't have the required permissions to write to the file, also return -1.
If filename is NULL, return -1.
If text_content is NULL, do not add anything to the file.
Do not create the file if it does not exist.
3. cp
Write a program that copies the content of one file to another.
Usage: cp file_from file_to
If the number of arguments is incorrect, exit with code 97 and print "Usage: cp file_from file_to" on the POSIX standard error.
If file_to already exists, truncate it.
If file_from does not exist or cannot be read, exit with code 98 and print "Error: Can't read from file NAME_OF_THE_FILE" on the POSIX standard error.
If you cannot create or write to file_to, exit with code 99 and print "Error: Can't write to NAME_OF_THE_FILE" on the POSIX standard error.
If you cannot close a file descriptor, exit with code 100 and print "Error: Can't close fd FD_VALUE" on the POSIX standard error.
The permissions of the created file should be rw-rw-r--. Do not change the permissions if the file already exists.
Read 1,024 bytes at a time from file_from to minimize system calls.
Author
Masehla Tshoane Respect.
