/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:36:36 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/24 16:17:09 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int min, int max)
{
	int	*array;
	int len;
	int i;

	if (max <= min)
		return (0);
	len = max - min;
	if (len < 0)
		len = -len;
	array = (int *)malloc(len * sizeof(int));
	if (array == 0)
		return(0);
	i = 0;
	while (i < len)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
