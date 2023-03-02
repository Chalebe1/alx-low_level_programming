#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	char *str;
	int o1, o2,  r1, r2;
	ssize_t r, w;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", av[1], av[2]);
		exit(97);
	}

	o2 = open(av[2],O_WRONLY | O_CREAT | O_TRUNC, 664);
	o1 = open(av[1],O_RDONLY);
	if (o1 == -1)
	{
		dprintf(2, "Error: can't read from file %s\n", av[1]);
		exit(98);
	}
	if (o2 == -1)
	{
		dprintf(2, "Error: can't write to  %s\n", av[2]);
		exit(99);
	}
	str =(char*) malloc(sizeof(char) * 1024);
	r = read(o1, str, 1024);
	if (r != 1024)
	{
		dprintf(2, "Error: can't read from file %s\n", av[1]);
		r1 = close(o1);
		if (r1 == -1)
		{
			dprintf(2,"Error: cant close fd %d\n", o1);
			exit(100);
		}
		exit(98);
	}
	r1 = close(o1);
	if (r1 == -1)
	{
		dprintf(2,"Error: cant close fd %d\n", o1);
		exit(100);
	}
	w = write(o2, str, 1024);
	if (w != r)
	{
		dprintf(2, "Error: can't write to  %s\n", av[2]);
		r2 = close(o2);
		if (r2 == -1)
		{	
			dprintf(2,"Error: cant close fd %d\n", o2);
			exit(100);
		}
		exit(99);
	}
	return (0);
}
