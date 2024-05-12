#include "main.h"

/**
 * execute_cmd - executes a command
 * @cmd: the command to execute
 * @argv: the arguments of command
 * Return: 0 on success, 1 on failure
 */
int execute_cmd(char *cmd, char *argv[])
{
	int status = 0, num_args;
	char *args[10];
	pid_t child_pid;
	char *shell_name, *path;

	shell_name = argv[0];
	num_args = process_line(cmd, args);

	if (num_args == 0)
		return (127);
	handle_builtin_commands(cmd, args, status);
	path = get_file_path(args[0]);

	if (!path)
	{
		fprintf(stderr, "%s: 1: %s: not found\n", shell_name, cmd);
		free(cmd);
		exit(127);
	}
	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error: failed to create");
		free(cmd);
		exit(1);
	}
	if (child_pid == 0)
	{
		if (execve(path, args, NULL) == -1)
			return (2);
	}
	else
	{
		wait(&status);
	}
	free(path);
	return (0);
}
