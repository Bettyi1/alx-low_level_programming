#include "main.h"

/**
 * append_text_to_file - Adds text at the end of a file
 * @text_content: string value
 * @filename: pointer
 * Return:1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int k;
	ssize_t count = 0;

	k = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		count = write(k, text_content, strlen(text_content));
		if (count == -1)
		{
			close(k);
			return (1);
		}
	}
	close(k);
	return (1);
}
