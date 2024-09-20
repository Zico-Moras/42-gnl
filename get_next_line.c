#include "get_next_line.h" 

char	*get_line(char **stash)
{

}

char	*read_file(char *stash, int fd)
{
	char	*buffer;
	int	bytes_read;
	char	*new_stash;

	while (!strchr(stash, '\n'))
	{
		buffer = (char *)malloc((BUFFER_SIZE + 1)sizeof(char));
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == 0) 
		{
			free(buffer);
			return (0);
		}
		buffer[bytes_read] = '/0';
		new_stash = strjoin(stash, buffer);
		if (!new_stash)
			return (0);
	}
	free(stash);
	return (new_stash);
}


char	*get_next_line(int fd)
{
	static char	*stash;
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)// invalid file decriptor or buffer size test
		return (NULL);

	//funcao par para ler o ficheiro e armazeanr na stash
	
	if (!stash)// checkar se a stash foi criada
		return (NULL);
	
	line = get_line(&stash);//funcao que extraia a linha do stash
	

	

	return(line);
}
