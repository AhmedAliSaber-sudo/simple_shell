#include "shell.h"


/**
 *run - function run the shell in or non interactive mood
 *@argc : number of array
 *@argv : array of arrays
 */

void run(int argc, char **argv)
{
	(void) argc;
	(void) argv;

	if (isatty(STDIN_FILENO) == 1)
	{
		interactive();
	}
	else
	{
		non_interactive();
	}
}
