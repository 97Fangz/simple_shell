#include "main.h"

/**
* argv - get the command
* execmd - generate full path
*
* Return: if -1 return error otherwise generate command
*/
void execmd(char **argv)
{
	char *command = NULL, *actual_command = NULL;

	if (argv)
	{
	command = argv[0];

        actual_command = get_location(command);

        if (execve(actual_command, argv, NULL) == -1)
		{
		perror("Error:");
        	}
	}
}
