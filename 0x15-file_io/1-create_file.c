#include "main.h"

/**
 *create_file - creates a file
 *@filename: filename.
 *@text_content: content writed in the file.
 *
 *Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int o;
	ssize_t w;
	ssize_t len = 0;
	
	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (o == -1)
			return (-1);
		return (1);
	}
	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (o == -1)
		return (-1);
													        
	for (len = 0; text_content[len];)
		len++;

	w = write(o, text_content, len);

	if (w != len)
	{
		close(o);
		return (-1);
	}
	close(o);
	return (1);
}
