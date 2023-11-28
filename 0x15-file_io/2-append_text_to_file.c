#include "main.h"

/**
 * append_text_to_file - Adds text at the end of a file
 * @text_content: string value
 * @filename: pointer
 * Return:1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0 ; text_content[count];)
			count++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, count);
	if (a == -1 || b == -1)
		return (-1);

	close(a);
	return (1);
}
