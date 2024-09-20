#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>


char	*ft_strchr(char *str, char chr)
{
	int	i;
	
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == chr)
			return (str + i);
		i++;
	}
	return (0);
}
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *stash, char *buffer)
{
	char	*join;
	int	i;

	i = 0;
	join = (char *)malloc(ft_strlen(stash) + ft_strlen(buffer));

	while(*stash)
	{
		*(join + i++) = *(stash++);
	}
	while(*buffer)
	{
		*(join + i++) = *(buffer++);
	}
	*(join + i) = '\0';
	return (join);
}
char	*read_file(char *stash, int fd)
{
	char	*buffer;
	int	bytes_read;
	char	*new_stash;

	while (!ft_strchr(stash, '\n'))
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
		free(stash);
		stash = new_stash;
	}
	free(stash);
	return (new_stash);
}
int	main(int argc, char **argv)
{
	int	fd;
	char	*buffer;
	int	bytes_read;
	if (argc == 1)
	{
		write(1, "argc == 1", 9);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	read_file(fd, buffer);
	

	
	//read_file(stash, fd);
	
}
