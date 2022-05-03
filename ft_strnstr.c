/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 02:48:53 by alachris          #+#    #+#             */
/*   Updated: 2022/04/22 00:02:00 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	b = (char *)big;
	if ((*little == 0) || (little == NULL))
		return ((char *)big);
	while ((i < len) && (big[i] != 0))
	{		
		while ((b[i + j] == little[j]) && ((i + j) < len))
		{
			if (little[j + 1] == 0)
				return ((char *)big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
