/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 10:50:40 by qkherzi           #+#    #+#             */
/*   Updated: 2021/01/20 13:16:41 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int rev_i;
	int temp;

	i = 0;
	rev_i = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[rev_i];
		tab[rev_i] = temp;
		i++;
		rev_i--;
	}
}
