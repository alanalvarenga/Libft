/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:44:08 by alachris          #+#    #+#             */
/*   Updated: 2022/04/19 21:56:23 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		length;
	char	*cpy;

	i = 0;
	cpy = NULL;
	if (src != NULL)
	{
		length = ft_strlen((char *)src);
		cpy = (char *) malloc(length + 1);
		while (i < length)
		{
			cpy[i] = src[i];
			i++;
		}
		cpy[i] = '\0';
	}
	return (cpy);
}
