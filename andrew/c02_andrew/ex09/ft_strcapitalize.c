/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:53:37 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/17 14:10:53 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_checkalphanum(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	ft_checkup(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_checklow(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_checkalphanum(str[i - 1]) == 0)
		{
			if (ft_checklow(str[i]) == 1)
				str[i] = str[i] - 32;
		}
		else
		{
			if (ft_checkup(str[i]) == 1)
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
