#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
* main - it copies the content of a file to another file
* @argc: number argument
* @argv: String argument
* Return: 0
*/
int main(int argc, char *argv[])
{
    int file_from, file_to, ret_read, ret_write;
    char buffer[BUFFER_SIZE];
    
    //validation check for number of arguments
    if(argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        return 97;
    }
    
    //open file_from for reading
    file_from = open(argv[1], O_RDONLY);
    if(file_from == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        return 98;
    }
    
    //open file_to for writing, truncate if already exists
    file_to = open(argv[2], O_WRONLY|O_CREAT|O_TRUNC, S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH);
    if(file_to == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        return 99;
    }
    
    //read from file_from and write to file_to
    while((ret_read = read(file_from, buffer, BUFFER_SIZE)) > 0) {
        ret_write = write(file_to, buffer, ret_read);
        if(ret_write == -1) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            return 99;
        }
    }
    
    //close file descriptors
    if(close(file_from) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        return 100;
    }
    if(close(file_to) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
        return 100;
    }
    
    return 0;
}
