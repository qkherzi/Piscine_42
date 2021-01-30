/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00-03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:32:36 by qkherzi           #+#    #+#             */
/*   Updated: 2021/01/20 10:24:21 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	dim2(char extr, char mid, int dim, int max)
{
	if (dim == 0 || dim == max - 1)
		ft_putchar(extr);
	else
		ft_putchar(mid);
}

void	rush(int x, int y)
{
	int line;
	int col;

	line = 0;
	col = 0;
	while (line < y)
	{
		while (col < x)
		{
			if (col == 0)
				dim2('A', 'B', line, x);
			else if (x > 1 && col == x - 1)
				dim2('A', 'B', line, y);
			else
				dim2('B', ' ', line, y);
			col++;
		}
		line++;
		col = 0;
		ft_putchar('\n');
	}
}
