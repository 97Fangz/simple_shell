#include "shell.h"
/**
 * checker - checks to see if its a built function
 * @cmd: tokenized user input
 * @buf: line driven from getline function
 * Return: 1 if cmd executed else 0
 */

int checker(char **cmd, char *buf)
{
if (handle_builtin(cmd, buf))
	retun (1);
else if (**cmd == '/')
{
execution(cmd[0], cmd);
return (1);
}
return (0);
}
