#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int i;
	int j;

	i=0;
	while(i <= 98)
	{
		j = i+1;
		while( j <= 99)
		{
			ft_putchar(48 + i / 10);
			ft_putchar(48 + i % 10);
			ft_putchar(' ');
			ft_putchar(48 + j / 10);
			ft_putchar(48 + j % 10);
			if(i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
