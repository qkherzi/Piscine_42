/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:40:53 by qkherzi           #+#    #+#             */
/*   Updated: 2021/01/26 10:48:24 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int ac, char **av)
{
	char	*temp;
	int		i;

	i = 0;
	while (++i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			temp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = temp;
		}
	}
	i = 0;
	while (i++ < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
	return (0);
}
