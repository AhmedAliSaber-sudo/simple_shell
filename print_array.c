#include "shell.h"

void print_string_array(char **arr)
{
    while (*arr)
    {
        printf("%s\n", *arr);
        arr++;
    }
}