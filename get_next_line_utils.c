#include "get_next_line.h"

char    *ft_strcpy(char *dest, char *st)
{
	size_t	size;
	size_t	count;
	int i;

	count = 0;
	while (st[count])
	{
		count++;
	}
	i = 0;
	if (size != 0)
	{
		while (st[i] && i < (size - 1))
		{
			dest[i] = st[i];
			size ++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str = malloc (sizeof(char) * 1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > ft_strlen(&s[start]))
		str = malloc(sizeof(char) * ft_strlen(&s[start]) + 1);
	else
		str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && len-- != 0)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

ssize_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (*s)
		i++;
	return(i);
}

/*char	*ft_strdup(char *st)
{
	char	*cpy;
	int		len;

	len = 0;
	while (st[len])
		len++;
	cpy = (char *) malloc(sizeof(char) * (len +1));
	if (cpy == NULL)
		return (NULL);
	len = 0;
	while (st[len])
	{
		cpy[len] = st[len];
		len++;
	}	
	cpy[len] = '\0';
	return (cpy);
}*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}