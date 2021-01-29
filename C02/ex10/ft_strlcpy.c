/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 07:58:04 by qkherzi           #+#    #+#             */
/*   Updated: 2021/01/27 15:46:05 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned  int i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int			main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("%u \n", (ft_strlcpy(av[1], av[2], atoi(av[3]))));
		printf("%lu \n", (strlcpy(av[1], av[2], atoi(av[3]))));
	}
	return (0);
}
