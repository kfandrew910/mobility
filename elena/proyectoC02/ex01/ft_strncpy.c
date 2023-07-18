char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != 0)
		i++;
	dest[i] = '\0';
	return (dest);
}
