/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:48:29 by qkherzi           #+#    #+#             */
/*   Updated: 2021/01/23 17:14:45 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *a;

	a = dest;
	while (*a)
		a++;
	while (nb-- && *src)
		*a++ = *src++;
	*a = '\0';
	return (dest);
}
