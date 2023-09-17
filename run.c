#include "shell.h"

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
