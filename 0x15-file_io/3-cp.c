#include <stdio.h>
#include "main.h"
#include <stdlib.h>

void g_close(int cp);
char *s_buff(char *file);

/**
 * main - main function
 * @argv: array of pointers to arguments
 * @argc: arguments
 * Return: 0
 * Description: If arg is corret -exit code 97
 *  if file_to cannot be created or written to - exit code 99.
 *  If file_from does not exist or cannot be read - exit code 98
 *  If file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	int cp_from, cp_to, x, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = s_buff(argv[2]);
	cp_from = open(argv[1], O_RDONLY);
	x = read(cp_from, buff, 1024);
	cp_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (cp_from == -1 || x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(cp_to, buff, x);
		if (cp_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		x = read(cp_from, buff, 1024);
		cp_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (x > 0);
	free(buff);
	g_close(cp_from);
	g_close(cp_to);
	return (0);
}

/**
 * g_close - function closes files descriptors
 * @cp: char input
 *
 */
void g_close(int cp)
{
	int m;

	m = close(cp);

	if (m == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close cp %d\n", cp);
		exit(100);
	}
}
/**
 * create_buffer - functiona creates bytes for buffer
 * @file: buffer file name
 *
 * Return: pointer
 */
char *s_buff(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
