/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 15:20:25 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/20 18:16:15 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;

	i = 0;
	dst_len = 0;
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	while (dst[dst_len])
		dst_len++;
	return (dst_len);
}

/*
int	main(void)
{
	size_t size;
	char *src;
	
	src = "ciao bro";
	size = 7;
	char dst[size];
	size_t a = ft_strlcpy(dst,src,size);
	printf("\n%zu\n", a);
	printf("\n%s\n", dst);
}
*/
