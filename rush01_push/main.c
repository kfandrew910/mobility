/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:43:50 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/15 12:37:23 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	solve_table(char table[6][6]);

void	print_table(char table[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			write(1, &table[j][i], 1);
			if (j < 4)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

/*
int decypher_table(char table[6][6], char *arg)
{
	//SIN ACABAR
	int i;
	int j;
	int all_good;

	i = 0;
	all_good = 1;
	while (npi macho && all_good == 1)
	{
		j = 0;
		while (npi macho x2 && all_good == 1)
		{
			if(numerito[] > '4' || numerito[] < '1')
				all_good = 0;
			j++;
		}
		i++;
	}
	if(all_good == 0)
		return (0);
	return (1);
}
*/

void	start_table(char table[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			table[j][i] = 'X';
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	table[6][6];

	if (argc != 2)
		return (1);
/*	if (decypher_table(table, argv[1]) == 0)
		return (2);*/
	start_table(table);
	solve_table(table);
	print_table(table);
	return (0);
}
