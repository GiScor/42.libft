/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:56:05 by gscorzon          #+#    #+#             */
/*   Updated: 2026/06/02 17:36:42 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (char)c)
			return ptr;
		ptr++;
	}
	if (*ptr == (char)c)
			return ptr;
	return NULL;
}

/*
int	main()
{
	char *str = "ciao a tutti diocane";

	printf("\nstrchr:   \n%s\n", strchr(str, 'a'));
	printf("\nft_strchr:\n%s\n", ft_strchr(str, 'a'));
}
*/
