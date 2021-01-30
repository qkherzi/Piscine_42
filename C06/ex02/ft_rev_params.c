/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:27:21 by qkherzi           #+#    #+#             */
/*   Updated: 2021/01/25 16:40:06 by qkherzi          ###   ########.fr       */
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

int		main(int ac, char **av)
{
	int i;

	i = ac;
	while (i-- != 1)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
	return (0);
}
