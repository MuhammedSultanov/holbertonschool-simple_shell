#include "main.h"
/**
* line_devider - devide the line
* @storage: string
* @arr: array
*
* Return: char pointer to array
*/
char **line_devider(char *storage, char **arr)
{
	char *token;
	int i = 0;

	token = strtok(storage, " \n\t");
	while (token != NULL && i < 63)
	{
		arr[i++] = token;
		token = strtok(NULL, " \n\t");
	}
	arr[i++] = NULL;
	return (arr);
}
