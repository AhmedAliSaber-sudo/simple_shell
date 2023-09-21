#include "shell.h"

/**
* non_interactive - runs the shell in non-interactive mode.
*/

void non_interactive(void)
{
	char *line;
	char **cmds;

	while (1)
	{
		line = get_line();
		cmds = parse_line(line);

		if (strcmp(cmds[0], "exit") == 0)
		{
			exit_shell(cmds);
			break;
		}

		execute_cmd(cmds);

		free(line);
		free_double_ptr(cmds, str_array_length(cmds));
	}
	free(line);
	free_double_ptr(cmds, str_array_length(cmds));
}
