/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:17:25 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/20 18:44:39 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, char *src, unsigned int size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] != 0)
		dst_len++;
	while (src[src_len] != 0)
		src_len++;
	while (src[i] && i < size)
	{
		dst[dst_len + i] = src[i];
		i++;
		if (i == size)
			dst[dst_len + i] = 0;
	}
	return (dst_len + src_len);
}
/*
int	main(void)
{
	size_t size;
	char *src;
	
	src = " come va";
	char dst[26] = "ciao bro";
	size = 3;
	size_t a = ft_strlcat(dst,src,size);
	printf("\n%zu\n", a);
	printf("\n%s\n", dst);
}
*/
