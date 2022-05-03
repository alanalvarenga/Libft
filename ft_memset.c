/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 00:21:04 by alachris          #+#    #+#             */
/*   Updated: 2022/04/06 02:53:34 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int		max;
	int		i;
	char	*s;

	i = 0;
	max = n;
	s = (char *) str;
	while (i < max)
	{
		s[i] = c;
		i++;
	}
	return (str);
}
