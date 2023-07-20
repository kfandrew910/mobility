/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:00:52 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/20 15:01:54 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

void    create_array(char *str, int nbr, int size, char *base)
{
	int i;
	
	i = 0;
	while (nbr > size)
	{
		str[i] = base[nbr % size];
		nbr = nbr / size;
		i++;
	}
	str[i] = base[nbr];
	str[i + 1] = 0;
}

int	check_exceptions(char *base)
{
	int i;
	int j;

	if (ft_strlen(base) < 2)
		return (1);
	i = 0;
	while (base[i] != 0 && base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if (base[i] < 32 || base[i] > 126)
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
	int size;
	int	i;
	int	final_nbr[255];
	if (check_exceptions(base) == 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * (-1);
	}
	size = ft_strlen(base);
	i = 0;
	while (nbr >= 0)
	{
		final_nbr[i] = nbr % size;
		nbr = nbr / size;
		if (nbr == 0)
			nbr--;
		i++;
	}
	i--;
	while ( i >= 0)
	{
		write (1, &base[final_nbr[i]] , 1);
		i--;
	}
}
