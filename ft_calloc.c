/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 02:46:17 by alachris          #+#    #+#             */
/*   Updated: 2022/04/27 23:35:47 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	size_t	*pont;

	total = nmemb * size;
	if (size > __SIZE_MAX__ / nmemb)
		return (NULL);
	pont = malloc(total);
	if ((!pont) || (total > INT_MAX))
		return (NULL);
	ft_bzero(pont, total);
	return ((void *)pont);
}
