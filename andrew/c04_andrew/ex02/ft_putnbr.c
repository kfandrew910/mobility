/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:45:09 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/24 11:45:14 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_pow(int n, int elevated)
{
	int	el_n;
	int	i;

	el_n = 1;
	i = 0;
	while (i < elevated)
	{
		el_n = el_n * n;
		i++;
	}
	return (el_n);
}

int	ft_int_length(int n)
{
	int	length;

	length = 1;
	while (n > 9 || n < -9)
	{
		n /= 10;
		length++;
	}
	return (length);
}

int	check_num(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	int	printable;
	int	remover;
	int	size;
	int	i;

	if (check_num(nb) == 0)
		return ;
	printable = nb;
	remover = 0;
	size = ft_int_length(nb);
	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	while (i < size)
	{
		printable = nb - remover;
		printable = printable / ft_pow(10, size - i - 1);
		remover = remover + printable * ft_pow(10, size - i - 1);
		ft_putchar(printable + 48);
		i++;
	}
}
