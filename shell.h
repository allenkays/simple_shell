#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
void alx_exit_builtin(void);
int alx_fork(void);
void alx_exec(char **args);
void alx_prompt(void);
char *alx_read_line(void);
char **alx_plit_line(char *line);
void alx_cd(char **rgs);
#endif

