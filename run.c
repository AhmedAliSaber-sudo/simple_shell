#include "shell.h"

/**
 *run - runs the shell in interactive or non-interactive mode.
 *@argc: the number of arguments.
 *@argv: array of strings.
 */

void run(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	{
		interactive();
	}
	else
	{
		non_interactive();
	}
}
