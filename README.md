what Is The Simple Shell?

This is a simple implementation of command-line interpreter for the Unix operating system created by Alx students Ahmed Ali  and Omnia Eldeeb.

Usage

In order to run this program,

Clone This Repo

git clone ...................

compile it with

gcc 4.8.4 -Wall -Werror -Wextra -pedantic *.c -o hsh.
You can then run it by invoking ./hsh in that same directory.

How to use it
In order to use this shell, in a terminal, first run the program:
prompt$ ./hsh
It wil then display a simple prompt and wait for commands.
$ 
A command will be of the type $ command
This shell can handle two types of commands: builtins and normal program.

List of built-ins
Currently the list of built-ins I wrote is:

cd [directory]
Switch to the specified directory (path).
env
Displays the environment variable
exit [exitstatus]
Exit from the program with exitstatus value. 0 by default.
getenv NAME
Return the value of the NAME variable if it is in the environment
help [command]
Displays the syntax for the command, or all commands.
history
Displays the last typed user .
echo [$$] or [$?] or [$PATH] Return pid and exit statue and PATH.

