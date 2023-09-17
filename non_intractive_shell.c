#include "shell.h"

void non_interactive(void)
{
    char *line;
    char **cmds;

    while (1)
    {
        line = get_line();
        cmds = parse_line(line);
        execute_cmd(cmds);

        free(line);
        free_double_ptr(cmds, str_array_length(cmds));
    }
}
