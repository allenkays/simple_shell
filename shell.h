#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
ssize_t getline(char **line, size_t *buflen, FILE *stream);
char** split_line(char *line); 
char* read_line();
#endif

