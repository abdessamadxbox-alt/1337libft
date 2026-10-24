/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdessamad <abdessamad@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:17:02 by abdessamad        #+#    #+#             */
/*   Updated: 2026/10/23 16:57:26 by abdessamad       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

char	*ft_itoa(int n)
{
	long	nb;
	int		size;
	char	*res;

	nb = n;
	size = 1;
	if (nb < 0)
	{
		size++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		size++;
		nb /= 10;
	}
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	res[size] = '\0';
	if (n < 0)
		res[0] = '-';
	while (nb >= 10)
	{
		res[--size] = nb % 10 + '0';
		nb /= 10;
	}
	res[--size] = nb + '0';
	return (res);
}
