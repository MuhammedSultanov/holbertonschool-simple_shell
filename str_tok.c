#include "main.h"

/**
 * process_line - tokenizes the line into commands and
 *                executes each one
 * @line: the line to process
 * @args: list of arguments
 * Return: 0 on success, 1 on failure
 */

int process_line(char *line, char *args[])
{
	int num_tokens = 0;
	char *token;

	/* Tokenize the line into commands and store them in cmds */
	token = strtok(line, " \n");
	while (token)
	{
		args[num_tokens] = token;
		token = strtok(NULL, " \n");
		num_tokens++;
	}
	args[num_tokens] = NULL;
	return (num_tokens);
}
