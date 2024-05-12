#include "main.h"

/**
 * shell_exit - handle the exit status
 * @status: status code
 **/

void shell_exit(int status)
{

	if (WIFEXITED(status))
		exit(WEXITSTATUS(status));
	else
		exit(0);
}
