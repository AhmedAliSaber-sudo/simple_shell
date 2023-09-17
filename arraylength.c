#include "shell.h"

/**
 * str_array_length - get the length of an array of strings.
 * @array: the array i need to get its length.
 * Return: the length of the array.
*/

int str_array_length(char **array)
{
	int length = 0;

	while (array[length] != NULL)
	{
		length++;
	}

	return (length);
}
