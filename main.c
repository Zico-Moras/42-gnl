#include "get_next_line.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	fd;
	char	*stash;
	if (argc == 1)
	{
		write(1, "argc == 1", 9);
		return (1);
	}
	*stash = 0;
	fd = open(argv[1], O_RDONLY);


	printf("%s", get_next_line(fd));


	return(1);
}
