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


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 100000
#endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
#include <fcntl.h>


char    *get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *src);
char *ft_strchr(char *s, int c);
int 	ft_strlen(const char *s);

#endif