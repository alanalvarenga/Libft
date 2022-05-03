/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:42:33 by alachris          #+#    #+#             */
/*   Updated: 2022/04/09 00:40:56 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	char		*s1;
	const char	*s2;

	s1 = (char *)dest;
	s2 = (const char *)src;
	if ((dest == NULL) && (src == NULL))
		return (dest);
	if (s2 < s1)
	{
		i = n - 1;
		while (i >= 0)
		{
			s1[i] = s2[i];
			i--;
		}
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
