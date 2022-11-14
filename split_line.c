#include "shell.h"
/**
 * alx_plit_line - function that split the token
 *
 * Return: tokens
 *
 *
 * @line: buffer to store input from the keyboard
 *
 */
char **alx_plit_line(char *line)
{
	int length = 0;
	int capacity = 16;
	char **tokens = malloc(capacity * sizeof(char *));
	char *delimiters = " \t\r\n";
	char *token = strtok(line, delimiters);

	while (token != NULL)
	{
		tokens[length] = token;
		length++;
		if (length >= capacity)
		{
			capacity = (int) (capacity * 1.5);
			tokens = realloc(tokens, capacity * sizeof(char *));
		}
		token = strtok(NULL, delimiters);
	}
	tokens[length] = NULL;
	return (tokens);
}
