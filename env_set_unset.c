#include "shell.h"

/**
* set_env_var - Initialize a new environment variable,
* or modify an existing one.
* @variable: the variable name.
* @value: the value of the variable.
* Return: 0 on success, -1 if failed.
*/
int set_env_var(char *variable, char *value)
{
	if (setenv(variable, value, 1))
	{
		fprintf(stderr, "Failed to set environment variable\n");
		return (-1);
	}
	return (0);
}

/**
* unset_env_var - Initialize a new environment variable,
* or modify an existing one.
* @variable: the variable name.
* Return: 0 on success, -1 if failed.
*/

int unset_env_var(char *variable)
{
	if (unsetenv(variable))
	{
		fprintf(stderr, "Failed to unset environment variable\n");
		return (-1);
	}
	return (0);
}
