/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 10:56:26 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/21 11:10:45 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	while (*ptr && i < n)
	{
		if (*ptr == c)
			return ptr;
		ptr++;
		i++;
	}
	return NULL;
}

/*
int	main()
{
	char *str = "ciao a tutti diocane";

	printf("\nstrchr:   \n%s\n", (unsigned char *)memchr(str, 't', 10));
	printf("\nft_strchr:\n%s\n", ft_memchr(str, 't', 10));
}
*/
