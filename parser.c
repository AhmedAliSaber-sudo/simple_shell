#include "shell.h"

/**
 * parse_line - parse the line entered
 * @line: the user input.
 * Return: return array of strings.
*/

char **parse_line(char *line)
{
    char *line_copy;
    char *token;
    char **tokens;
    int length = 0;

    line_copy = malloc(sizeof(char) * strlen(line));
    if (!line_copy) {
        perror("malloc");
        return NULL;
    }
    strcpy(line_copy, line);

    tokens = malloc(sizeof(char *) * (strlen(line) + 1));
    if (!tokens) {
        perror("malloc");
        free(line_copy);
        return NULL;
    }

    token = strtok(line_copy, " ");
    while (token != NULL)
    {
        tokens[length] = token;
        length++;
        token = strtok(NULL, " ");
    }
    tokens[length] = NULL;

    return tokens;
}
