#include "shell.h"

/**
* execute_cmd - executes commands.
* @argv: array of arguments.
*/

void execute_cmd(char **argv)
{
	pid_t child;
	int status;

	child = fork();
	if (child == -1)
	{
		perror("Error happened in forking");
	}
	if (!child)
	{
		if (execvp(argv[0], argv))
		{
			perror(argv[0]);
			_exit(127);
		}
	}
	else
	{
		waitpid(-1, &status, 0);
	}
}
