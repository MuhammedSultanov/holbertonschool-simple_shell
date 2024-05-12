#include "main.h"

/**
 * slash_checker - check the file nmae that it begins with slash or not
 * @str: str to be checked
 * Return: 0 in success or 1 in failure
 **/
int slash_checker(const char *str)
{
	if (str != NULL && strchr(str, '/') != NULL)
	{
		return (1);
	}
	return (0);
}

/**
 * get_file_loc - get the executable path of the file
 * @path: full path variable
 * @file_name: executable file
 *
 * Return: full path to the executable file
 **/

char *get_file_loc(char *path, char *file_name)
{
	char *path_copy, *token;
	struct stat file_path;
	char *path_buffer = NULL;

	if (!path)
		return (NULL);

	path_copy = strdup(path);
	token = strtok(path_copy, ":");

	while (token)
	{
		if (path_buffer)
		{
			free(path_buffer);
			path_buffer = NULL;
		}
		path_buffer = malloc(strlen(token) + strlen(file_name) + 2);

		if (!path_buffer)
		{
			perror("Error: allocation of the memory is failed");
			exit(EXIT_FAILURE);
		}
		strcpy(path_buffer, token);
		strcat(path_buffer, "/");
		strcat(path_buffer, file_name);
		strcat(path_buffer, "\0");

		if (stat(path_buffer, &file_path) == 0 && access(path_buffer, X_OK) == 0)
		{
			free(path_copy);
			return (path_buffer);
		}
		token = strtok(NULL, ":");
	}
	free(path_copy);
	if (path_buffer)
		free(path_buffer);
	return (NULL);
}
/**
 * get_file_path - get the full path of the file
 * @file_name: argument entered by user
 *
 * Return: The full path
 **/
char *get_file_path(char *file_name)
{
	char *path = _getenv("PATH");
	char *full_path;

	if (slash_checker(file_name) &&
			access(file_name, X_OK) == 0)
		return (strdup(file_name));

	full_path = get_file_loc(path, file_name);

	return (full_path);
}
