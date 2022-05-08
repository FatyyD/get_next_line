char    *strcpy(char *dest, const char *src)
{
	size_t	i;
	size_t	count;

	count = 0;
	while (src[count])
	{
		count++;
	}
	i = 0;
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;

	len = 0;
	while (src[len])
		len++;
	cpy = (char *) malloc(sizeof(char) * (len +1));
	if (cpy == NULL)
		return (NULL);
	len = 0;
	while (src[len])
	{
		cpy[len] = src[len];
		len++;
	}	
	cpy[len] = '\0';
	return (cpy);
}

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