#include "get_next_line.h" 

//char	*get_line(char **stash)
//{
//
//}

char	*read_file(char *stash, int fd)
{
	char	*buffer;
	int	bytes_read;
	char	*new_stash;

	bytes_read = 1;
	while (!ft_strchr(stash, '\n') && bytes_read )
	{
		buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == 0) 
		{
			free(buffer);
			return (0);
		}
		buffer[bytes_read] = '\0';
		new_stash = ft_strjoin(stash, buffer);
		if (!new_stash)
		{
			free(buffer);
			return (0);
		}
		if (*stash)
			free(stash);
	printf("%s\n", new_stash);
		stash = new_stash;
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

	return(read_file(stash, fd));

	
	

}
