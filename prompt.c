#include "shell.h"

/**
* print_prompt - prints the prompt.
*/

void print_prompt(void)
{
	char *prompt = "$ ";

	write(1, prompt, strlen(prompt));
}
