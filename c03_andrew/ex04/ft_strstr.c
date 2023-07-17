/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:00:34 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/17 15:46:53 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == to_find[0])
		{
			k = i;
			j = 0;
			while (str[k] == to_find[j])
			{
				k++;
				j++;
			}
			if (to_find[j] == 0)
				return (str + i);
		}
		i++;
	}
	return (NULL);
}
