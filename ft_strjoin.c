/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:42:19 by alachris          #+#    #+#             */
/*   Updated: 2022/04/24 02:45:02 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1_len;
	unsigned int	i;
	char			*join;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	i = 0;
	join = (char *)malloc((s1_len + ft_strlen(s2) + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	while ((s1[i] != 0) && (s1_len != 0))
	{
		join[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != 0)
	{
		join[s1_len] = s2[i];
		i++;
		s1_len++;
	}	
	join[s1_len] = '\0';
	return (join);
}
