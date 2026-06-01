/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 10:43:11 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/21 10:47:43 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int	len;

	ptr = (char *)s;
	len = 0;
	while (ptr[len])
		len++;
	while (len >= 1)
	{
		if (ptr[len] == c)
			return &ptr[len];
		len--;
	}
	return NULL;
}

/*
int	main()
{
	char *str = "ciao a tutti diocane";

	printf("\nstrchr:   \n%s\n", strrchr(str, 'a'));
	printf("\nft_strchr:\n%s\n", ft_strrchr(str, 'a'));
}
*/
