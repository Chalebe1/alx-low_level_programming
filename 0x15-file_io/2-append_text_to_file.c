#include "main.h"

/**
 *_strlen - finds the length of a string
 *@str: pointer to the string
 *
 *Return: length of the string
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t w;
	int o, len;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (o == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(o);
		return (1);
	}	
	for (len = 0; text_content[len];)
		len++;
	w = write(o, text_content, len);
	close(o);
	if (w != len)
		return (-1);
	return (1);
}
