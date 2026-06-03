/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 15:13:15 by gscorzon          #+#    #+#             */
/*   Updated: 2026/06/02 17:25:26 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
		char	*d;
		const char	*s;

		d = (char *)dest;
		s = (const char *)src;
		if (d > s && d < (s+n))
		{
				d += n;
				s += n;
				while (n--)
						*--d = *--s;
		}
		else
		{
				while (n--)
						*d++ = *s++;
		}
		return (dest);
}
