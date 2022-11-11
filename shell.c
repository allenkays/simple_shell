#include "shell.h"
int main() 
{
	char *line;
	char **tokens;

	while (true)
    	{
		alx_prompt();
		line = alx_read_line();
		tokens = alx_split_line(line);
		
		if (tokens[0] != NULL) {
			alx_exec(tokens);
		}
		
		free(tokens);
		free(line);
    	}
 }
