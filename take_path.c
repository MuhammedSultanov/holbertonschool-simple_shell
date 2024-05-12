#include "main.h"
/**
* path_handler - path handler
* @buffer: buffer (input from shell)
*
* Return: status
*/

int path_handler(char *buffer)
{
	int status = 0;
	pid_t pid = fork();

	if (pid == 0)
	{
		char *argv[64];

		line_devider(buffer, argv);
		if (argv[0] == NULL)
		{
			free(buffer);
			exit(EXIT_SUCCESS);
		}
		if (strcmp(argv[0], "env") == 0)
			handle_env(buffer);
		if (strchr(argv[0], '/') != NULL)
		{
			if (access(argv[0], X_OK) == 0)
				execute_command(argv[0], argv);
		}
		else
			handle_path(buffer, argv);
		fprintf(stderr, "./hsh: 1: %s: not found\n", argv[0]);
		free(buffer);
		exit(127);
	}
	else if (pid > 0)
	{
		if (waitpid(pid, &status, 0) == -1)
			perror("ERROR");
		free(buffer);
		status = WIFEXITED(status) ? WEXITSTATUS(status) : 1;
	}
	else if (pid == -1)
	{
		perror("fork");
		free(buffer);
		exit(EXIT_FAILURE);
	}
	return (status);
}
