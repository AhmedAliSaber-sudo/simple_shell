#include "shell.h"

/**
 *print_string_array - array of string
 *@arr : pointer to array
 */

void print_string_array(char **arr)
{
	while (*arr)
	{
		printf("%s\n", *arr);
		arr++;
	}

}
