/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:19:42 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/26 12:18:47 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

char	**sort_args(char *args[])
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (args[i] != 0)
	{
		j = 1;
		while (args[j] != 0 && args[j + 1] != 0)
		{
			if (ft_strcmp(args[j], args[j + 1]) > 0)
			{
				tmp = args[j];
				args[j] = args[j + 1];
				args[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (args);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	**sorted;

	if (argc < 2)
		return (1);
	sorted = sort_args(argv);
	i = 1;
	while (sorted[i] != 0)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
