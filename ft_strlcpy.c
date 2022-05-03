/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:16:24 by alachris          #+#    #+#             */
/*   Updated: 2022/04/21 01:22:16 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len] != 0)
		len++;
	if (size > 0)
	{
		while ((i < size -1) && (src[i] != 0))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}	
	return (len);
}
