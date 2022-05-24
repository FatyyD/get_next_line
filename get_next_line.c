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

char *ft_strchr(const char *s, int c)// le reste 
{
    char *str;

    //str = NULL;
    str = (char *) s;

    while (str || *str != c)
    {
        printf("*C : %c\n", *str);
        if (*str == '\0')
                return(NULL);
        str++;  
    }
    printf("STR : %s\n", str);
    fflush(stdout);
    return (str);
} 


static char    ft_save(char *line, int c)// le reste 
{
    int i;

    i = 0;
    if (ft_strchr(line, '\n') + 1)
    {
        return (line[i]);
        i++;
    }
  return (0);
}

/*char  ft_save(char *s, int fd)
{
    int i;

    i  = 0;

    while(s[i])
    {
        if (s[i] != '\0' || s[i] != '\n')
        {
            return(s[i]);
            i++;
        }
        return (0);
    }

}
*/

char    *get_next_line(int fd)
{
    static char *st = NULL;
    char buf[BUFFER_SIZE + 1]; 
    char *line = NULL;
    int i; // valeur de retour
    //char *tmp; //ligne temporaire
    //size_t n;
    //ssize_t read;

    //i = 0;
    i = read(fd, buf, BUFFER_SIZE);
    if (fd < 0 || BUFFER_SIZE <= 0)
        return(0);
    //if (!st)
     //   return (0); 
    //line = loc(t, fd);
    //st = ft_rest(line,'\n');
    if (i < 0)
        return (0);
    //buf[i] = '\0';
    //line = ft_strjoin(line, buf);
    while (ft_strchr(buf, '\n') == NULL && i == read(fd, buf, BUFFER_SIZE))
    {
       // = read(fd, buf, BUFFER_SIZE);
        //if (i < 0)
           // return (0);
       printf("I = %d\n", i);
        buf[i] = '\0';
        printf("BUF : %s\n", buf);
        line = ft_strjoin(line, buf);
        printf("LINE : %s\n", line);
     //free(line);
    }
   printf("LINE : %s\n", line);
   fflush(stdout);
   /* return (line);
    if (!line)
        return (0);*/
   while (line[i])
    {
        if (line[i] == '\n')
            i++;
        if (i == 0)
        line = ft_strdup(line); 
    }
    *line = ft_save(line, '\n');
    free(line);
    line = NULL; 
 //return (st);
}
