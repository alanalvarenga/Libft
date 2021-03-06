/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alachris <alachris@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:51:57 by alachris          #+#    #+#             */
/*   Updated: 2022/04/05 23:10:31 by alachris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((c >= 65) && (c <= 90))
		|| ((c >= 97) && (c <= 122))
		|| ((c >= 48) && (c <= 57)))
		return (1);
	return (0);
}
