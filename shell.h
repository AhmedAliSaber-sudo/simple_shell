#ifndef SHELL_H
#define SHELL_H

/***  libraries ***/
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/*** Functions Declarations ***/
void print_prompt(void);
char *get_line();
char **parse_line(char *line);
int str_array_length(char **array);
void free_double_ptr(char **arr, size_t size);
void *safe_malloc(size_t size);
void print_string_array(char **arr);
void execute_cmd(char **argv);
void interactive(void);
void non_interactive(void);
void run(int argc, char **argv);

#endif
