#include "get_next_line.h"
#include <fcntl.h>

int main()
{
    int     k =0;
    int     fd;
    char    *s= 0;

    fd = open("text.txt", O_RDONLY);

    while ((s = get_next_line(fd)))
    {
        printf("[%d] : >%s<\n", k, s);
        free(s);
        k++;
    }
}