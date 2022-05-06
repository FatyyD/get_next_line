#include "get_next_line.h"

char    *get_next_line(int fd)
{
    char *s;
    char buf[BUFFER_SIZE + 1]; 
    int *line;
    char *tmp;
    size_t i;

    i = 0;
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buf, 0) == - 1)
        return(-1);
    if (!s)
        return (0);
    while ()
    



}