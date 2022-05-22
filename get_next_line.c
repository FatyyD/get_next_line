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


/*int  loc(size_t, int fd) //redimensionne la ligne 
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
}*/

char *ft_strchr(const char *s, char c)// le reste 
{
    char *str:

    *str = (char *) c;

    whule (*str != c)
    {
        if (*str == '\0')
                return(NULL);
        str++;        
    }
    return (str);
} 

/*char  *check(char *s, int fd)
{
    int i;

}
*/

char    *get_next_line(int fd)
{
    static char *st = NULL;
    char buf[BUFFER_SIZE + 1]; 
    char *line;
    int i; // valeur de retour
    char *tmp; //ligne temporaire
    //size_t n;
    //ssize_t read;

    i = 0;
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buf, 0) == -1)
        return(0);
    if (!st)
        return (0); 
    //line = loc(t, fd);
    //st = ft_rest(line,'\n');
    while (ft_strchr(line, '\n') == NULL && i == read(fd, buf, BUFFER_SIZE > 0)) 
    {
        buf[i] = '\0';
        line = ft_strjoin(line, buf);
        free(line);
    }
    //return (line[i]);
    while (st[i])
    {
        if (st[i] == '\n')
            i++;
        if (i == 0)
        line = ft_strdup(st); 
    }
    //*line = ft_save()
    free(line);
    line = NULL; 
 //return (line[i]);
}
