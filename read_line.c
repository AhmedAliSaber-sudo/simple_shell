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

<<<<<<< HEAD
	if (characters == -1)
	{
		
		if (feof(stdin))
		{	
		    printf("\n");
	    }else
=======
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
>>>>>>> 540d1b2661d14b067b9659c9febfd4bf806761ed

	    {
		    perror("error in getline");
	    }
	    free(line)
		    
	 return (NULL);
	}
	return (line);
}

