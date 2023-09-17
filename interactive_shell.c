#include "shell.h"

void interactive(void)
{
    char *line;
    char **cmds;

    while (1)
    {
        
        print_prompt();
        line = get_line();
        cmds = parse_line(line);
        execute_cmd(cmds);
        putchar('\n');

        free(line);
        free_double_ptr(cmds, str_array_length(cmds));
    }
}