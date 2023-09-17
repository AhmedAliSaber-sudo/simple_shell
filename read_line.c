#include "shell.h"

/**
* get_line - gets the command from the user.
* Return: the the line that the user inputs.
*/

char *get_line()
{
    char *line = NULL;
    size_t bufsize = 0;
    ssize_t characters;

    characters = getline(&line, &bufsize, stdin);

    if (characters == -1) {
        if (feof(stdin))
        {
            free(line);
            exit(EXIT_SUCCESS);
        }
        else
        {
            free(line);
            perror("error while get line");
            exit(EXIT_FAILURE);
        }
        
    }

    return line;
}

