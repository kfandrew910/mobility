#include <unistd.h>

void ft_print_alphabet(void)
{

	char primeraLetra = 'a';
	char ultimaLetra = 'z';

	while( primeraLetra <= ultimaLetra)
	{
		write(1, &primeraLetra, 1);
		primeraLetra++;
	}

	//write(1,"abcdefghijklmnñopqrstuvwxyz", 28);
}
