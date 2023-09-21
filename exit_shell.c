#include "shell.h"

/**
 * exit_shell - exits the shell.
 * @cmds: array of strings representing the command and its arguments.
 */

void exit_shell(char **cmds)
{
	int exit_value = 0;

	if (cmds[1])
		exit_value = atoi(cmds[1]);

	if (exit_value == -1)
	{
		fprintf(stderr, "./hsh: 1: exit: Illegal number: %d\n", exit_value);
		exit_value = 2;
	}

	free_double_ptr(cmds, str_array_length(cmds));
	exit(exit_value);
}
