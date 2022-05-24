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


#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# define BUFFER_SIZE 10

char    *get_next_line(int fd);
static char ft_save(char *line, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(char *src);
static char *ft_strchr(const char *s, int c); 

#endif