/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 10:43:11 by gscorzon          #+#    #+#             */
/*   Updated: 2026/06/04 19:12:26 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	ptr = (char *)s;
	len = 0;
	while (ptr[len])
		len++;
	while (len >= 0)
	{
		if (ptr[len] == (char)c)
			return (&ptr[len]);
		len--;
	}
	return (NULL);
}
