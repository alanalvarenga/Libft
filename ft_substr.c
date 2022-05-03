/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:16:44 by alachris          #+#    #+#             */
/*   Updated: 2022/04/23 00:38:11 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	max_len;
	unsigned int	s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len)
		max_len = 0;
	else
		max_len = s_len - start;
	if (max_len > len)
		max_len = len;
	sub = (char *)malloc((max_len + 1) * sizeof(char));
	if (start >= s_len)
	{
		sub[0] = '\0';
		return (sub);
	}
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, max_len + 1);
	return (sub);
}
