#ifndef MAIN_H
#define MAIN_H
 /*Libraries*/
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
/*Prototypes*/
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_exit(int code, const char *msg, const char *arg);
int main(int argc, char *argv[]);

#endif
