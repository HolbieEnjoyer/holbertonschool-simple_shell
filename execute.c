#include "main.h"

#define ERR_STR "./hsh: 1: %s: not found\n"


/**
 * placeholder - used as placeholder function in ternary op stmt
 * Return: Always 0
 */
int placeholder(void)
{
	return (0);
}

/**
 * execve_error - dry function
 * @arr: pointer to pointer
 * @command: pointer
 */

void execve_error(char **arr, char *command)
{
	if (access(arr[0], X_OK) == 0)
		if (execve(arr[0], arr, environ) == -1)
			perror("execve"), free(command), exit(EXIT_FAILURE);
}

/**
 * execute - executes command
 *
 *@command: The command string to execute.
 *
 * Return: the exit status of the executed command,
 * or -1 if an error occurs.
 */
int execute(char *command)
{
	int status = 0;
	char *arr[64], **env = environ, *path = getenv("PATH"), *token, exepath[256];
	pid_t pid = fork();

	if (pid == -1)
		perror("fork"), free(command), exit(EXIT_FAILURE);
	else if (pid == 0)
	{
		line_div(command, arr);
		arr[0] == NULL ? free(command), exit(EXIT_SUCCESS) : placeholder();
		if (strcmp(arr[0], "env") == 0)
		{
			while (*env != NULL)
				printf("%s\n", *env), env++;
			free(command), exit(EXIT_SUCCESS);
		}
		if (strchr(arr[0], '/') != NULL)
			execve_error(arr, command);
		else
		{
			if (path == NULL)
				fprintf(stderr, ERR_STR, arr[0]), free(command), exit(127);
			token = strtok(path, ":");
			while (token != NULL)
			{
				snprintf(exepath, sizeof(exepath), "%s/%s", token, arr[0]);
				execve_error(arr, command)
				token = strtok(NULL, ":");
			}
		}
		fprintf(stderr, ERR_STR, arr[0]), free(command), exit(127);
	}
	else
	{
		waitpid(pid, &status, 0), free(command);
		status = WIFEXITED(status) ? WEXITSTATUS(status) : 1;
	}
	return (status);
}
