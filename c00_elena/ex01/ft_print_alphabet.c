#include <unistd.h>

void ft_print_alphabet(void)
{

	char primeraLetra = 'a';
	char ultimaLetra = 'z';

	while( primeraLetra <= ultimaLetra)
	{
		write(1, &primeraLetra, 1);
		primeraLetra++; // --> primeraLetra = primeraLetra + 1;
	}

	//write(1,"abcdefghijklmnñopqrstuvwxyz", 28);
	// string "abc" --> char[3]: ['a']['b']['c']
	// 			       0    1    2
}
