#include "main.h"
/**
 * create_file - function creates a file.
 * @filename: New file pointer
 * @text_content: string input
 * Return:1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int cp, y, ln = 0;

	cp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(cp, text_content, ln);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0 ; text_content[ln];)
			ln++;
	}
	if (cp == -1 || y  == -1)
		return (-1);

	close(cp);
	return (1);
}


