#include "main.h"
/**
* main - main func
*
* Return: int
*/

int main(void)
{

	char *storage = NULL;
	int status = 0;


	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("NM$ ");
		storage = get_input();
		if (storage == NULL)
			break;
		if (strcmp(storage, "exit") == 0)
		{
			free(storage);
			exit(0);
		}
		status = path_handler(storage);
		if (status == 2)
		{
			exit(2);
		}
	}
	return (status);
}
