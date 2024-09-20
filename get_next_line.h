#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 20
# endif

#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>
#include <fcntl.h>


char	*get_next_line(int fd);
char	*read_file(char *stash, int fd);
char	*ft_strchr(char *str, char chr);
int	ft_strlen(char *str);
char	*ft_strjoin(char *stash, char *buffer);

#endif
