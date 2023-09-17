#include "shell.h"

<<<<<<< HEAD
/**
 * run - function run.c:5: ERROR: trailing whitespac
void run(void)
{
	while (1)
	{
		char *line;
		char **cmds;

		print_prompt();
		line = get_line();
		cmds = parse_line(line);
		execute_cmd(cmds)
		putchar('\n');
		free(line);
		free_double_ptr(cmds, str_array_length(cmds));
	}
=======
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
  
>>>>>>> 540d1b2661d14b067b9659c9febfd4bf806761ed
}
