/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:53:37 by akovacs-          #+#    #+#             */
/*   Updated: 2023/07/13 15:28:08 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_checkalpha(char c)
{
	if ((c >= 'a' && c <= 'z') 
			|| (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
		return(1);
	return(0);
}

int ft_checklow(char c)
{
	if (c >= 'a' && c <= 'z')
		return(1);
	return(0)
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_checkalpha(str[i - 1]) == 0 && ft_checklow(str[i]) == 1)
		{
			
		}
	}
	return (str);
}
