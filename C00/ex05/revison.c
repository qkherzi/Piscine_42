/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revison.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:15:40 by qkherzi           #+#    #+#             */
/*   Updated: 2021/01/18 17:36:19 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_chiffre(int a, int b, int c)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	if (a != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
void	ft_print_comb(void)
{
	int aa;
	int ab;
	int ac;

	aa = 0;
	while (aa <= 7)
	{
		ab = aa + 1;
		while (ab <= 8)
		{
			ac = ab + 1;
			while (ac <= 9)
			{
				ft_chiffre(aa, ab, ac);
				ac++;
			}
			ab++;
		}
		aa++;
	}
}

int main()

{
	ft_print_comb();
	return 0;
}
