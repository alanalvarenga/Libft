/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 00:40:57 by alachris          #+#    #+#             */
/*   Updated: 2022/04/30 00:26:30 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{	
	size_t	dlen;
	size_t	s;

	dlen = 0;
	while ((dest[dlen] != 0) && (dlen < size))
		dlen++;
	s = 0;
	if (dlen < size)
	{
		while (((dlen + s) < (size - 1)) && (src[s]))
		{
			dest[dlen + s] = src[s];
			s++;
		}
		dest[dlen + s] = '\0';
	}	
	return (dlen + ft_strlen((char *)src));
}
