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
	
	while(digits[0] <= 57-n+1)
	{
		if(n > 1)
		{
			j=0;
			while(j < n-1)
			{
				digits[j+1] = digits[j]+1;
				j++;
			}
		}
		while(digits[n-1]<='9')
		{
			j=0;
			while(j <= n-1){	
				write(1, &digits[j], 1);
				j++;
			}
			if(digits[0] != 57-n+1)
				write(1, ", ", 2);
			digits[n-1]++;
		}
		digits[0]++;
		i++;
	}
}

int main(void)
{
	ft_print_combn(1);
	write(1, "\n", 1);
	return 0;
}
