/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 11:11:13 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/21 16:49:35 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char*)s1 == *(char*)s2)
			i++;
		else
			return(*(char*)s1 - *(char*)s2);
	}
	return 0;
}

/*
int	main()
{
	int	a = 1610612743;
	int	b = 1594944;
	int	*s1 = &a;
	int	*s2 = &b;

	printf("\nmemcmp: %d\n", memcmp(s1,s2,4));
	printf("\nft_memcmp: %d\n", ft_memcmp(s1,s2,4));
	printf("\na: %8X", a);
	printf("\nb: %8X\n", b);
}
*/
