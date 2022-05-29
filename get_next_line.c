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


static int ft_compt( char *str)//avance et retourne la valeur 
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


static char     *ft_save(char *str) // recuperer le debut de la ligne
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

char *ft_strchr(char *s, int c)// lorsqu'on est sur '\n'
{

    while (*s != '\0' && *s != (char)c)
          s++;
      // printf("*C : %c\n", *str);
    if (*s == (char)c && *s != '\0')
            return(s + 1);
    else if (*s == '\0')
            return (s);
  /* printf("STR : %s\n", str);
    fflush(stdout);*/
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
/*static char    *ft_reste(char *str)// le reste 
{

    if (ft_strchr(str , '\n'))
    {
        ft_strcpy(str, ft_strchr(str, '\n') + 1);
        return(str);
    }

    if(ft_compt(str) > 0)
    {
        ft_strcpy(str, ft_strchr(str, '\0'));
        return (str);
    }
  return (str);
}*/

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

char    *get_next_line(int fd)
{
    static char *str = NULL;
    char buf[BUFFER_SIZE + 1];
    char *line;  
    char *temp;
    int i; // valeur de retour read
    
   i = 1;
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buf, 0) == -1)
        return(NULL);
    //str = buf;
    if (str == 0)
    str = ft_strdup("\0");
    while (!ft_compt(str) && i  > 0)
    {
         i = read(fd, buf, BUFFER_SIZE);       // pr calculer i à chaque passage 
        buf[i] = '\0'; // retourne le nb d'octet affiche la fin du fichier
        str = ft_strjoin(str, buf);
       //free(temp);
     //printf("STR : %s\n", str);
    }
 /* printf("str: %s\n", str);
    fflush(stdout);*/
    line = ft_save(str);//pour récuperer la premiere partie
    temp = ft_reste(str); //recuperer le reste //stock
    free(str);
    str = ft_strdup(temp);
    free(temp);
 return (ft_renvoi(&str, &line, i));
}
