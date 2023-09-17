#include "shell.h"

/**
* get_line - gets the command from the user.
* Return: the the line that the user inputs.
*/

char *get_line()
{
	char *line = NULL;
	size_t bufsize = 0;
	size_t characters;

	characters = getline(&line, &bufsize, stdin);

	if (characters == -1)
	{
		
		if (feof(stdin))
		{	
		    printf("\n");
	    }else

	    {
		    perror("error in getline");
	    }
	    free(line)
		    
	 return (NULL);
	}
	return (line);
}

