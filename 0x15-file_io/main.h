#ifndef MAIN_H
#define MAIN_H



#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>




#define READ_BUFFER_SIZE 1024







int _putchar(char c);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);




#endif