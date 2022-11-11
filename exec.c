#include <main.h>

/**
 * alx_exec- executes given command or launch program
 * args:- pointer to pointer to chars params
 *
 * return: 1 on success -1 0r error on failure
 */
void alx_exec(char **args)
{
	pid_t child_pid = fork();
	pid_t wpid;
	int status;

	if (child_pid == 0)
	{
		/**
		 * execvp - executes program within enviroment path
		 * args: arguments to command or program
		 */
		execvp(args[0], args);
		perror("hsh");
		exit(EXIT_FAILURE);
	}
	else if (child_pid < 0)
	{
		perror("hsh");
	}
	else
	{
		do {
			waitpid(child_pid, &status, WUNRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}
