/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:17:25 by gscorzon          #+#    #+#             */
/*   Updated: 2026/06/03 13:31:25 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	rv;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size > dlen)
		rv = dlen + slen;
	else
		rv = size + slen;
	while (*dst && size > 0)
	{
		dst++;
		size--;
	}
	while (size > 1 && *src)
	{
		*dst++ = *src++;
		size--;
	}
	if (size == 1)
		*dst = 0;
	return (rv);
}
