#include "shell.h"

/**
 * alx_cd - function to change working directory
 *
 * @args: array of string pointer-user arguments
 */
void alx_cd(char **args)
{
	if (args == NULL)
	{
		fprintf(stderr, "alx: cd: missing argument\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
			perror("alx : cd");
	}
}
