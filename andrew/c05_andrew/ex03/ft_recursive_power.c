/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:25:58 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/23 16:44:25 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if(power < 0)
		return (0);
	if(power == 0)
		return (1);
	nb = nb * nb;
	nb = ft_recursive_power(nb, (power - 1));
	return (nb);
}
