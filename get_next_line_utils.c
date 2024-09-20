#include "get_next_line.h"

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
