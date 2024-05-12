#include "main.h"

void print_env(void)
{
        char **env;
        int i = 0;

        env = environ;

        while (env[i] != NULL)
        {
                printf("%s\n", env[i]);
                i++;
        }

}
