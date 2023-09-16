#include "shell.h"

/**
 * free_double_ptr - free double pointer.
 * @array: pointer to a pointer.
 * @size_t: the size of the pointer.
 */

void free_double_ptr(char **arr, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		free(arr[i]);
	}

	free(arr);
}

