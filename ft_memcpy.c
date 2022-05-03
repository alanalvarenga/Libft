/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 00:19:24 by alachris          #+#    #+#             */
/*   Updated: 2022/04/22 00:03:46 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ndest;
	unsigned char	*nsrc;

	if ((dest == NULL) && (src == NULL))
		return (dest);
	i = 0;
	ndest = (unsigned char *)dest;
	nsrc = (unsigned char *)src;
	while (i < n)
	{
		ndest[i] = nsrc[i];
		i++;
	}
	return (dest);
}
