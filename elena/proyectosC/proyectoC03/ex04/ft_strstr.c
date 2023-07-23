
char	*ft_strstr(char *str, char *to_find)
{
	int i;
	char *e;

	e = str;
	if(to_find[0] == 0)
		return (str);
	while(e[0] != 0)
	{
		if(e[0] == to_find[0])
		{
			i = 1;
			while(e[i] == to_find[i] 
				&& e[i] != '\0' 
				&& to_find[i] != '\0')
				i++;
			if(to_find[i] == '\0')
				return (e[i]);
		}
		e++;
	}
	return (0);
}
