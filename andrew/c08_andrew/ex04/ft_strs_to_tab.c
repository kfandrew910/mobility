#include <stdlib.h>
#include "ft_stock_str.h"

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char			*ft_strdup(char *src)
{
	char	*str;
	int	i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(*src) * (ft_strlen(src) + 1))))
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stocks;
	int				i;

	if(!(stocks = malloc(sizeof(struct s_stock_str) * (ac + 1))))
		return (NULL);
	stocks->size = 0;
	stocks->str = 0;
	stocks->copy = 0;
	i = 0;
	while(i < ac)
	{
		stocks[i].size = ft_strlen(av[i]);
		if(!(stocks[i].str = malloc(sizeof(char) * stocks[i].size)))
			return (NULL);
		stocks[i].str = av[i];
		stocks[i].copy = ft_strdup(av[i]);
		i++;
	}
	return (stocks);
}
