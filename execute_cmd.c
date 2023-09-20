#include "shell.h"

/**
* execute_cmd - executes commands.
* @argv: array of arguments.
* @env: environment.
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
		if (execve(argv[0], argv, NULL))
		{
			perror("./hsh");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(-1, &status, 0);
	}
}
