ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	int o = open(filename, O_RDONLY | 0_WRONLY);
				
	if (fd==-1 || filename==NULL)
		return (0);		
					
	ssize_ r = read(o,str,letters);					
	if (n==-1)
		return (0);

	ssize_t w = write(STDOUT_FILENO, str, letters);
								
	if  (w == -1 || w != letters)
		return (0);
	close(o);
	if (r == w)
		return (w);
}
	
