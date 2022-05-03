/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:59:40 by alachris          #+#    #+#             */
/*   Updated: 2022/04/16 00:10:43 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	if (c > 127)
		c = c % 256;
	str = s;
	while (*str)
		str++;
	while (str != s)
	{
		if (*str == c)
			return ((char *)str);
		str--;
	}
	if (*str == c)
		return ((char *)str);
	return (0);
}
