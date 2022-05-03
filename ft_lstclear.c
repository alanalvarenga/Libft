/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 21:36:13 by alachris          #+#    #+#             */
/*   Updated: 2022/04/29 22:52:18 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*tmp;

	if (*lst == NULL)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		aux = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = aux;
	}
	*lst = NULL;
}
