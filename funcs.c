#include "main.h"

/**
 * _getenv - Gets enviroment variable
 * @name: name of variable
 * Return: pointer to env_variable
 */

char *_getenv(const char *name)
{
	int i = 0;
	int len = strlen(name);

	while (environ[i])
	{
		if (strncmp(name, environ[i], len) == 0 &&
			environ[i][len] == '=')
		{
			return (&environ[i][len + 1]);
		}
		i++;
	}
	return (NULL);
}
