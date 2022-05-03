/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:12:31 by alachris          #+#    #+#             */
/*   Updated: 2022/04/22 00:02:30 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	if (c > 127)
		c = c % 256;
	while (*s)
	{
		if (*s == c)
		{
			str = (char *)s;
			return (str);
		}
		s++;
	}
	if (*s == c)
	{
		str = (char *)s;
		return (str);
	}
	return (0);
}
