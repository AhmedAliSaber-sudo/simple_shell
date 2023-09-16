#include "shell.h"

/**
 * main - the entr point of the simple shell.
 * @argc: the number of arguments passed to the shell.
 * @argv: an array of pointers to the arguments.
 * Return: 0 on success.
*/

int main(int ac, char **av)
{
    
    char *line;
    char **cmds;

    (void) ac, (void)av;

    print_prompt();
    line = get_line();
    cmds = parse_line(line);
    print_string_array(cmds);

    free(line);
    free_double_ptr(cmds, str_array_length(cmds));

    return (0);

}