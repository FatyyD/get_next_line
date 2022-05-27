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


static size_t  ft_compt(const char *s)//avance et retourne la valeur 
{
    int i;

    i = 0;
    while (s[i] != '\0' && s[i] != '\n')
    {
        i++;
    }
    return(i);
}


char     *ft_save(size_t size) // recuperer le debut de la ligne
{
    char *s;
    char *p;

    s = (char*) malloc(sizeof(char) * (size + 1));
    if (s == NULL)
            return (0);
    size = size + 1;
    p = s;       
    while (size-- > 0)
    {
        *p++ = '\0' ;
    }
    return(s);
}

char *ft_strchr(const char *s, int c)// lorsqu'on est sur '\n'
{
    char *str;

    //str = NULL;
    str = (char *) s;

    while ( *str != c)
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


static char    *ft_reste(char *str, size_t *c)// le reste 
{

    if (ft_strchr(str , '\n'))
    {
        ft_strcpy(str, ft_strchr(str, '\n') + 1);
        return(str);
    }

    if(ft_compt(str) > 0)
    {
        ft_strcpy(str, ft_strchr(str, '\0'));
        *c = 0;
        return (str);
    }
  return (NULL);
}

char    *get_next_line(int fd)
{
    static char *str = NULL;
    static char buf[BUFFER_SIZE + 1]; 
    char *temp;
    int i; // valeur de retour
    size_t c;
    
    c = 1;
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buf, BUFFER_SIZE) < 0)
        return(0);
    if(str == NULL)
        return(0);
        printf("I = %d\n", i);
    str = ft_save((0));
    while (/*ft_strchr(str, '\n') == NULL && */i > 0)
    {
        i = read(fd, buf, BUFFER_SIZE); // pr calculer i à chaque passage 
        buf[i] = '\0'; // retourne le nb d'octet affiche la fin du fichier
        temp = str;
        str = ft_strjoin(temp, buf);
         printf("STR : %s\n", str);
        free(str);
    }
    printf("LINE : %s\n", str);
    fflush(stdout);
    str = ft_substr(str, 0, ft_compt(str)); //pour récuperer la premiere partie
    if ((ft_reste(str, &c) != NULL) && c == 1) //recuperer le reste //stock;
    return (0);
   // free(str);
  //  str = NULL; 
 //return (0);
}
