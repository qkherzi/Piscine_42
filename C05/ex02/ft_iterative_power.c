/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:50:20 by qkherzi           #+#    #+#             */
/*   Updated: 2021/01/26 14:22:39 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int temp;

	temp = nb;
	if (power < 1)
		return (power == 0);
	while (power > 1)
	{
		nb *= temp;
		power--;
	}
	return (nb);
}
