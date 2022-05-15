/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 22:26:56 by fadiallo          #+#    #+#             */
/*   Updated: 2022/05/06 22:27:01 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *read(char *st, int fd)
{
    //char buff[BUFFER_SIZE]
    int i;
    while (i == read(fd, buff, 0))
    { 
        buf[i] = '\0';
        st = strjoin(s1, s2);
    }
    return (st);
}

int  loc(size_t, int fd) //redimensionne la ligne 
{
    char *s;
    char *p;

    s = (char*) malloc(sizeof(char) * (size +1)));
    if (s == NULL)
            return (NULL);
     size_t = 0;       
    while (size > 0)
    {
        size--;
        p++ = '/0';
    }
    return(s);
}

/*char  *check(char *s, int fd)
{
    int i;

}
*/

char    *get_next_line(int fd)
{
    static char *st;
    char buf[BUFFER_SIZE + 1]; 
    char *line;
    int i;
    char *tmp;
    //size_t n;
    //ssize_t read;

    i = 0;
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buf,0) == - 1)
        return(-1);
    if (!st)
        return (0);
    line = NULL; // if (line == NUll)
    line = loc(t, fd);
    if (st[i])
    {
        while(st[i] == '\n')
            i++;
        if( i == 0)
            ft_strdup(src, fd);   
    }
    else if (line)
        //free(line);
    /*while (i = read(fd, buff, )) 
    {
        buf[i] = '\0';
        st = strjoin();
    }
    return (st)*/
    
}
