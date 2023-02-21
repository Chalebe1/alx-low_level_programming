#include "main.h"
#include <stdlib.h>
int create_file(const char *filename, char *text_content)
{
	int o;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		o = open(filename,O_CREAT | O_TRUNC, 0600);
			if (o == -1)
				return (-1);
		return (1);
	o = open(filename, O_CREAT | O_WRONLY | O_EXCL | O_TRUNC ,0600);
	if (o == -1)
		return (-1);
	w = write(o,text_content,strlen(text_content));
		if (w != strlen(text_content))
		{
			close(o);
			return (-1);
		}
	close(o);
	return (1);
}	
