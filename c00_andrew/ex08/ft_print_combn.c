#include <unistd.h>

void ft_print_combn(int n)
{
	if(n < 0 || n > 9)
		return ;

	char digits[n];
	int i;
	int j;

	digits[0] = '0';
	i = 0;
	while(digits[i] <= 57-n+1)
	{
		if(n > 1)
			digits[i+1] = digits[i]+1;
		j=0;
		while(j <= n)
		{
			write(1, &digits[j], 1);
			if(digits[j] != 57-n+1)
				write(1, ", ", 2);
			digits[j+1] = digits[j]+1;
			j++;
		}
		i++;
	}
}

int main(void)
{
	ft_print_combn(2);
	write(1, "\n", 1);
	return 0;
}
