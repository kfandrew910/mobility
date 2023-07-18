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

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*found;

	found = str;
	if (to_find[0] == 0)
		return (found);
	while (*found != 0)
	{
		if (found[0] == to_find[0])
		{
			i = 1;
			while (found[i] == to_find[i]
				&& found[i] != 0
				&& to_find[i] != 0)
				i++;
			if (to_find[i] == 0)
				return (found);
		}
		found++;
	}
	return (NULL);
}
