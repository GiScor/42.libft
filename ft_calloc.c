/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:04:21 by gscorzon          #+#    #+#             */
/*   Updated: 2026/06/01 18:34:52 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = NULL;
	if (!(nmemb < size / INT_MAX))
		mem = malloc(nmemb * size);
	if (!mem)
			return NULL;
	ft_bzero(mem, size);
	return(mem);
}
