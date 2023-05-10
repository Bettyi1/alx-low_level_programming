#include "main.h"
/**
 * create_file - function creates a file.
 * @text_content: string input
 * @filename: New file pointer
 *
 * Return:1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int c, y, ln = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (ln = 0 ; text_content[ln];)
			ln++;
	}
	c = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(c, text_content, ln);
	if (c == -1 || y == -1)
		return (-1);
	close(c);
	return (1);
}
