#include <unistd.h>

void ft_print_numbers(void)
{
	char pnum;
	
	pnum = '0';
	while( pnum <= '9' )
	{
	write(1, &pnum, 1);
	pnum++;
	}
}
