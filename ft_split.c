/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:14:50 by alachris          #+#    #+#             */
/*   Updated: 2022/04/26 04:21:27 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countwords(char const *s, char c)
{
	unsigned int	count;
	int				i;
	int				is_word;

	count = 0;
	i = 0;
	is_word = 0;
	while (s[i])
	{		
		if ((s[i] != c) && (!is_word))
		{
			is_word = 1;
			count++;
		}
		else if ((is_word) && (s[i] == c))
			is_word = 0;
		i++;
	}
	return (count);
}

const char	*ft_find_c(const char *s, char c)
{
	while ((*s) && (*s == c))
		s++;
	return (s);
}	

char	**ft_fill(char **split, const char *s, char c, size_t words)
{
	char	**save_split;
	char	*pos;

	save_split = split;
	s = ft_find_c(s, c);
	while (words--)
	{		
		pos = ft_strchr(s, c);
		if (pos != NULL)
		{
			*split = ft_substr(s, 0, pos - s);
			s = ft_find_c(pos, c);
		}
		else
			*split = ft_substr(s, 0, ft_strlen(s) + 1);
		split++;
	}
	*split = NULL;
	split = save_split;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**split;

	if (s == NULL)
		return (NULL);
	words = ft_countwords(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	ft_fill(split, s, c, words);
	return (split);
}
