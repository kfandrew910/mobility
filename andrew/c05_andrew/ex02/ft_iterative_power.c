/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:38:15 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/23 17:50:51 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	el_n;
	int	i;

	el_n = 1;
	i = 0;
	if (power >= 0)
	{
		while (i < power)
		{
			el_n = el_n * nb;
			i++;
		}
	}
	else
	{
		while (i > power)
		{
			el_n = el_n / nb;
			i--;
		}
	}
	return (el_n);
}
