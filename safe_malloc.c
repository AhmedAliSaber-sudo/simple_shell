#include "shell.h"

void *safe_malloc(size_t size)
{
	void *ptr = malloc(size);

	if (ptr == NULL)
	{
		printf("Error: malloc failed.\n");
		exit(EXIT_FAILURE);
	}

	return (ptr);
}
