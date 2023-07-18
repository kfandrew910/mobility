#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

int	check_exceptions(char *base)
{
	int i;
	int j;

	if (ft_strlen(base) < 2)
		return (1);
	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);	
}

void ft_putnbr_base(int nbr, char *base)
{
	int i;

	if (check_exceptions(base) == 1)
		return ;
}
