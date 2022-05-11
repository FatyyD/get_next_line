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
    while (i == read(fd, buff, ))
    { 
        buf[i] = '\0';
        st = strjoin(s1, s2);
    }
    return (st);
}

int  loc(char *line, int fd) //re tampon si pas suffisant 
{
    char l[BUFFER_SIZE];
    int i;

    i = 0;
    //while ()
    l = (char*) malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (s == NULL)
            return (NULL);
    return()
}

char  *check(char *s, int fd)
{
    int i;

}


char    *get_next_line(int fd)
{
    static char *st;
    char buf[BUFFER_SIZE + 1]; 
    char *line;
    int i;
    //size_t n;
    //ssize_t read;

    i = 0;
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buf,0) == - 1)
        return(-1);
    if (!s)
        return (0);

    if (st[i]) 
    {
        while(st[i] == '\n')
            i++;
        if( i == 0)
            ft_strdup(src, fd);   
    }
        
    /*while (i = read(fd, buff, )) 
    {
        buf[i] = '\0';
        st = strjoin();
    }
    return (st)*/
    
}
