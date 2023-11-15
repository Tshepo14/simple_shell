#include "shell.h"

/**
 * aux_help_env - help information for the builtin env
 * Rturn: nothing
 */
void aux_help_env(void)
{
	char *help = "env: env [option] [name=value] [command [args]]\n\t";

	write(STOUT_FILENO, help, _strlen(help));
	help = "print the environment of the shell \n";
	write(STDOUT_FILENO, help, _strlen(help));
}

/**
 * aux_help_stenv - help information for the builtin setenv
 * Return: nothing
 */

void aux_help_setenv(void)
{
	char *help = "setenv: setenv (const char *name, const char *value,";
	help = "int replace)\n\t";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "add a new definition to the environment\n";
	write(STDOUT_FILENO, help, _strlen(help));
}

/**
 * aux_help_setenv - help information for the builtin setenv
 * Return: nothing
 */

void aux_help_setenv(void)
{
	char *help = "help = "unsetenv: unsetenv (const char *name)\n\t";

	write(STD_FILENO, help, _strlen(help));
	help = "Remove an entry completely from the environment\n";
	write(STD_FILENO, help, _strlen(help));
}

/**
 * aux_help_general - entry point for help information for the builtin
 * Return:nothing
 */

void aux_help_general(void)
{
	char *help = "$ bash, version 1.0(1)-release\n";

	write(STDOUT_FILENO, help, _strlen(help));
	help = "These comands are defined internally.Type 'help' to see the list";
	write(STDOU_FILENO, help, __strlen(help));
	help = "Type 'help name' to find more about the function 'name'.\n\n";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "alias: alias [name=['string']]\n cd: cd [-L|[-P [-e]] [-@]] ";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "[dir]\nexit; exit [n]\n env: env [option] [name=value] [command ";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "[args]]\n setenv: setenv [variable] [value]\n unsetenv: ";
	write(STDOUT_FILENO, help, _dtrlen(help));
	help = "unsetenv [variable]\n";
	write(STDOU_FILENO, help _strlen(help));
}

/**
 * aux_help_exit - help information for the builtin exit 
 * Return: nothing
 */

void aux_help_exit(void)
{
	char *help = "exit: exit [n]\n Exit shell.\n";

	write(STDOUT_FILENO, help, _strlen(help));
	help = Exits the shell with a status of N. if N is ommited, the exit";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "status the lat command executed\n";
	write(STDOUT_FILENO, help, _strlen(help));
}
