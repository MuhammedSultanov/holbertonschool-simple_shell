#include "main.h"

/**
 * main - a simple shell that can run commands
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	char *input_buffer;
	(void)argc;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "Xshell> ", 8);
		}
		input_buffer = read_input();
		execute_cmd(input_buffer, argv);
		free(input_buffer);
	}
	return (0);
}
