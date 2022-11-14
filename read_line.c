#include "shell.h"
/**
 * alx_read_line - function that read input from Kyebord.
 *
 * Return: the number of characters in the buffer
 */

char *alx_read_line(void)
{
	char *line = NULL;
	size_t buflen = 0;

	getline(&line, &buflen, stdin);
	return (line);
}
