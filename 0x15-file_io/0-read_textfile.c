#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile- reads text and prints iy yo stdo
 * @filename: txt file to being read
 * @letters: input letter to be read
 * Return: writy, or 0 if function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t x;
	ssize_t ready;
	ssize_t writy;

	x = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * letters);
	ready = read(x, buffer, letters);
	writy = write(STDOUT_FILENO, buffer, ready);

	if (x == -1)
		return (0);

	free(buffer);
	close(x);
	return (writy);
}
