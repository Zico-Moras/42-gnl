#include <stdio.h>
#include <stdlib.h>

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
int	main()
{
	char	*str1;
	char	*str2;

	str1 = "burro";
	str2 = "caralho";

	printf("%s", ft_strjoin(str1, str2));
	
}
