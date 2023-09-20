#include "shell.h"

/**
 * free_double_ptr - frees a double pointer.
 * @arr: an array.
 * @size: the size of the array.
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
