#include "get_next_line.h"
#include <stdio.h>

int	main(int argv, char **argv)
{
	int	fd;
	char	*stash;
	if (argv == 1)
	{
		write(1, "argv == 1", 9);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);

	while (stash = get_next_line(fd))
		printf("%s", stash);

	return (0);
	

}
