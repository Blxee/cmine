
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_strlcat(char *dest, char *src, int n)
{
	int dest_len;
	int src_len;
	int i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= n)
		return (n + src_len);
	i = 0;
	while (dest_len + i < n - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (n > 0)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len)
}
