#include "shell.h"

/**
* print_prompt - prints the prompt.
*/

void print_prompt(void)
{
	char *prompt = "$ ";

	if (isatty(STDIN_FILENO) == 1)
		write(1, prompt, strlen(prompt));
}
