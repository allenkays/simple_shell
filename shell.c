#include "shell.h"

/**
 * main - the entry point
 *
 * Return: always 0.
 */

int main(void)
{
	char *line;
	char **tokens;

	while (true)
	{
		alx_prompt();
		line = alx_read_line();
		tokens = alx_plit_line(line);
		if (tokens[0] != NULL)
			alx_exec(tokens);
		alx_exit_builtin();
		free(tokens);
		free(line);
	}
}
