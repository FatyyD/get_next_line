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


static int ft_compt(char *str)
{
       int i;

    i = 0;
    
    while(str[i])
    {
        if (str[i] == '\n')
            return (1);
        i++;
    }
    return(0);
}


static char     *ft_save(char *str) 
{
    int i;
    int len;

    char *dest;

    i = 0;
   while (str[i] != '\0' && str[i] != '\n')
        i++;
    len = i + 1;
   dest = malloc(sizeof(char) * (len + 1));
    if (!dest)
            return (NULL);
    i = 0;     
    while (str[i] != '\0' && i < len)
    {
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

char *ft_strchr(char *s, int c)
{

    while (*s != '\0' && *s != (char)c)
          s++;
    if (*s == (char)c && *s != '\0')
            return(s + 1);
    else if (*s == '\0')
            return (s);
    return (NULL);
}

static char     *ft_reste(char *str)
{
    char *temp;
    char *line;

    unsigned int len;
    temp = ft_strchr(str, '\n');
    len = ft_strlen(temp);
    line = malloc(sizeof(char)* (len + 1));
    if (!line)
        return(NULL);
    len = 0;
    while (temp[len] != '\0')
    {
        line[len] = temp[len];
        len++;
    }
    line[len] = '\0';
    return (line);
}

static char *ft_renvoi(char **str, char **line, int i)
{
    if (i == 0 && **line == '\0')
    {
        free(*line);
        free(*str);
        *str = NULL;
        return (NULL);
    }
    return (*line);
}
void ft_free_str(char **str)
{
    if (str != NULL && *str != 0)
    {
        free(*str);
        *str = NULL;
    }
}
char    *get_next_line(int fd)
{
    static char *str;
    char  *buf; //[BUFFER_SIZE + 1];
    char *line;
    char *temp;
    int i;
    buf = malloc(sizeof *buf * (BUFFER_SIZE + 1));
   if (!buf)
    return(NULL);
   i = 1;
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buf, 0) == -1)
        return(NULL);
    if (str == 0)
    str = ft_strdup("\0");
    while (!ft_compt(str) && i  > 0)
    {
         i = read(fd, buf, BUFFER_SIZE);
        buf[i] = '\0'; 
        str = ft_strjoin(str, buf);
    }
    line = ft_save(str);
    temp = ft_reste(str);
    ft_free_str(&str);
    free(str);
    str = ft_strdup(temp);
    free(temp);
 return (ft_renvoi(&str, &line, i));
}
