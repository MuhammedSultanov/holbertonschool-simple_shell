#include "main.h"



char *get_env(char *name)
{
    char **env;
    int i = 0;
    size_t n;
    
    n = strlen(name);
    env = environ;
    
    while(env[i])
    {
        if (strncmp(env[i], name, n) == 0)
        {
            return env[i];
        }
        i++;
    }
    return name;
}
