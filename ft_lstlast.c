/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:15:12 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/27 15:55:44 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	
	if (!lst)
		return NULL;
	i = ft_lstsize(lst);
	while (i > 0 && lst->next)
	{
		lst = lst->next;
		i--;
	}
	return (lst);
}
