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

/* char *read(char *st, int fd)
{
    int i;
    while (i == read(fd, buff, 0))
    {
        buf[i] = '\0';
        st = strjoin(s1, s2);
    }
    return (st);
} */

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

static char ft_rest(const char *line, int fd)// le reste 
{
    char i;

    i = 0;
    while(*i != line)
    {
        if(i != '\0' || i != '\n')
        {
            return(line);
        }
    return(NULL);
    }
}
/*char  *check(char *s, int fd)
{
    int i;

}
*/

char    *get_next_line(int fd)
{
    static char st[];
    char buf[BUFFER_SIZE + 1]; 
    char *line = NULL;
    int i; // valeur de retour
    char *tmp; //ligne temporaire
    //size_t n;
    //ssize_t read;

    i = 0;
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buf, BUFFER_SIZE) == - 1)
        return(-1);
    if (!st)
        return (0);a 
    line = loc(t, fd);
    st = ft_rest(line,'\n');
    while (i = read(fd, buff,BUFFER_SIZE > 0 )) 
    {
        buf[i] = '\0';
        line = strjoin(&line, buff);
        free(line);   
    }
    while (st[i])
    {
        if (st[i] == '\n')
            i++;
        if (i == 0)
        line = ft_strdup(src, fd); 
    }
    free(line);
    line = NULL; 
    
    //return (0);
}
