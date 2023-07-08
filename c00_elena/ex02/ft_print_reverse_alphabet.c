#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char ultimaletra = 'z';
	char primeraletra = 'a';

	while(ultimaletra >= primeraletra)
	{
	
	write(1, &ultimaletra, 1);
	ultimaletra--;

	}
}
