/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 21:09:18 by alachris          #+#    #+#             */
/*   Updated: 2022/04/27 01:51:11 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_convert(char *numb, int n, int size, int negative)
{
	numb[size] = '\0';
	while (size--)
	{
		numb[size] = (n % 10) + 48;
		n = n / 10;
	}
	if (negative == 1)
		numb[0] = '-';
	return (numb);
}

unsigned int	ft_getsize(int n)
{
	int	count;
	int	size;

	if (n < 0)
		size = 2;
	else
		size = 1;
	count = n / 10;
	while (count != 0)
	{
		size++;
		count = count / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*numb;
	int		size;
	int		negative;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	size = ft_getsize(n);
	numb = (char *)malloc(size + 1);
	if (numb == NULL)
		return (NULL);
	numb[size] = '\0';
	negative = 0;
	if (n < 0)
	{
		n = n * (-1);
		negative = 1;
	}
	numb = ft_convert(numb, n, size, negative);
	return (numb);
}
