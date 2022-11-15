#include "shell.h"

/**
 * alx_cd - function to change working directory
 * @args: array of string pointer-user arguments
 * return: 1 on success; 0 otherwise
 */
void alx_cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "alx: cd: missing argument\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
			perror("alx : cd");
	}
}
