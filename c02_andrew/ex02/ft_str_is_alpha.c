
int	ft_str_is_alpha(char *str)
{
	int i;
	int is_alpha;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if((str[i] >= 'a' && srt[i] <= 'z') || (str[i] >= 'A' && str[i <= 'Z']))
			i++;
		else
			return (0);
	}
	return (1);
}
