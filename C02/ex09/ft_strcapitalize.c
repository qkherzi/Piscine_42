/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 07:57:33 by qkherzi           #+#    #+#             */
/*   Updated: 2021/01/21 11:18:38 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int b;

	i = 0;
	while (str[i] != '\0')
	{
		b = 1;
		while ((str[i] >= 'a' && str[i] <= 'z') ||
						(str[i] >= '0' && str[i] <= '9') ||
						(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'z') && (b == 1))
			{
				str[i] = str[i] - 32;
				b = 0;
			}
			else if ((str[i] >= 'A' && str[i] <= 'Z') && (b == 0))
				str[i] = str[i] + 32;
			else
				b = 0;
			i++;
		}
		i++;
	}
	return (str);
}
