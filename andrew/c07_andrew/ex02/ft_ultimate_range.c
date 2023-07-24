/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:37:12 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/24 15:37:29 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int len;
	int i;

	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	if (len < 0)
		len = -len;
	array = (int *)malloc(len * sizeof(int));
	if (array == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = array;
	i = 0;
	while (i < len)
	{
		array[i] = min + i;
		i++;
	}
	return (len);

}
