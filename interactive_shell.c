#include "shell.h"

/**
* interactive - runs the shell in interactive mode.
*/

void interactive(void)
{
	char *line;
	char **cmds;

	while (1)
	{
		print_prompt();
		line = get_line();
		if (line == NULL)
		{
			free(line);
			break;
		}

		cmds = parse_line(line);
		if (cmds == NULL)
		{
			free(cmds);
			break;
		}
		if (strcmp(cmds[0], "exit") == 0)
		{
			exit_shell(cmds);
			break;
		}

		execute_cmd(cmds);
		write(1, "\n", 1);

		free(line);
		free_double_ptr(cmds, str_array_length(cmds));
	}

	free(line);
	free_double_ptr(cmds, str_array_length(cmds));
}
