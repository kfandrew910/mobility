/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:37:46 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/24 15:37:59 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;

	return length;
}

int	get_true_size(int size, char **strs, char *sep)
{
	int t_size;
	int sep_size;
	int i;
	
	i = 0;
	t_size = 0;
	sep_size = ft_strlen(sep);
	while (i < size)
	{
		t_size += ft_strlen(strs[i]);
		if (i != size - 1)
			t_size += sep_size;
		i++;
	}
	return (t_size);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	char	*str;
	int	true_size;

	if (size < 0)
		return (0);
	if (size == 0)
	{
		return ((char*)malloc(sizeof(char)));
	}
	true_size = get_true_size(size, strs, sep);
	str = (char *)malloc(true_size + 1 * sizeof(char));
	i = 1;
	ft_strcpy(str, strs[0]);
	if (size > 1)
		ft_strcat(str, sep);
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if(i != size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
