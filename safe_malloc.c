#include "shell.h"

/**
* safe_malloc - allocate memory and retuen error if failed.
* @size: the size of the memory to be allocated.
* Return: the pointer to the allocated memory.
*/

void *safe_malloc(size_t size)
{
    void *ptr = malloc(size);
    char *message = "Error: malloc failed.\n";

    if (ptr == NULL)
    {
        write(1, message, strlen(message));
        exit(EXIT_FAILURE);
    }

    return (ptr);
}
