/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:18:54 by fadiallo          #+#    #+#             */
/*   Updated: 2022/05/04 20:18:57 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# define BUFFER_SIZE 10

char    *get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(char *src);
static char *ft_strchr(const char *s, int c); 
char    *ft_strcpy(char *dest, char *st);
char	*ft_substr(char const *s, unsigned int start, size_t len);
ssize_t	ft_strlen(const char *s);

#endif