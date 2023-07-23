/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:48:25 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/23 18:05:51 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	int res;
	if(index < 0)
		return (-1);
	if(index == 0)
		return (0);
	res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	if(res < 0)
		res  = -res;
	return (res);
}
