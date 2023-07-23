/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:14:24 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/23 18:37:50 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int is_prime;
	int i;

	is_prime = 1;
	i = 3;
	if(nb < 2)
		return (0);
	if(nb > 2 && nb % 2 == 0)
		is_prime = 0;
	while (i < nb / 2 && is_prime == 1)
	{
		if(nb % i == 0)
			is_prime = 0;
		i = i + 2;
	}
	return (is_prime);
}
