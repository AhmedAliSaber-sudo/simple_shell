#include "shell.h"

/**
 * parse_line - parse the line entered
 * @line: the user input.
 * Return: return array of strings.
*/

char **parse_line(char *line)
{
    const char *delim = " \n";
    char *line_copy = NULL;
    char *token;
    char **tokens;
	int tokens_numbers = 0;
	int i;

	line_copy = safe_malloc(sizeof(char *) * strlen(line));
	
	strcpy(line_copy, line);
	token = strtok(line_copy, delim);

	while (token)
	{
		tokens_numbers++;
		token = strtok(NULL, delim);
	}
	tokens_numbers++;

	tokens = safe_malloc(sizeof(char *) * tokens_numbers);
    
	token = strtok(line, delim);
	for (i = 0; token != NULL; i++)
	{
		tokens[i] = strdup(token);
		token = strtok(NULL, delim);
	}
	tokens[i] = NULL;
	free(line_copy);
	return (tokens);
}
