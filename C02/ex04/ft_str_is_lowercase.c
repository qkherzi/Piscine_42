/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 07:53:04 by qkherzi           #+#    #+#             */
/*   Updated: 2021/01/21 07:53:27 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;
	int check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			check = 1;
		else
			return (0);
		i++;
	}
	return (check);
}
