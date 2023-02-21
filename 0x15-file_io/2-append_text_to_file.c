#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t w;
	int o, len;

	if (filename == NULL)
		return (-1);
	o=open(filename, O_EXCL | O_APPEND);
	if (o == -1)
		return (-1);
	if (text_content == NULL)
		return (-1);
	for (len = 0; text_content[len];)
		len++;
	w=write(o, text_content, len);
	if (w != len)
		return (-1);
	return (1);
}
