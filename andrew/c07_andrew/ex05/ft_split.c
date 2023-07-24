/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:39:55 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/24 15:40:28 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_sep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int count_str(char *str, char *charset)
{
	int n;
	int i;

	n = 0;
	i = 0;
	while(str[i])
	{
		if(is_sep(str[i], charset) == 0
			&& is_sep(str[i + 1], charset) == 1)
			n++;
		i++;
	}
	if(is_sep(str[i - 1], charset) == 0)
		n++;
	return (n);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != 0 && is_sep(str[i], charset) == 0)
		i++;
	return (i);
}

char	*ft_putword(char *str, char *charset)
{
	int len;
	int i;
	char *copy;

	i = 0;
	len = ft_strlen_sep(str, charset);
	copy = (char *)malloc((len + 1) * sizeof(char));
	while(i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}

char **ft_split(char *str, char *charset)
{
	char **split;
	int size;
	char *ptr;
	int i;

	i = 0;
	ptr = str;
	size = count_str(str, charset);
	split =(char **)malloc((size + 1) * sizeof(char *));
	while(ptr[0] != 0)
	{
		while(ptr[0] != 0 && is_sep(ptr[0], charset) == 1)
			ptr++;
		if(ptr[0] != 0)
		{
			split[i] = ft_putword(ptr, charset);
			i++;
		}
		while(ptr[0] != 0 && is_sep(ptr[0], charset) == 0)
			ptr++;
	}
	split[i] = 0;
	return (split);
}
