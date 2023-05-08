#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - function creates a file.
 * @filename: New file pointer
 * @text_content: string input
 * Return: -1 on success, -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int cp;
	int y;
	int len = 0;

	cp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(cp, text_content, len);

	if (text_content != NULL)
	{
		for (; text_content[len];)
			len++;
	}
	if (filename == NULL)
		return (-1);
	if (cp == -1)
		return (-1);
	if (y == -1)
		return (-1);
	close(cp);

	return (1);
}


