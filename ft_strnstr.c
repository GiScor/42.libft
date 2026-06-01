/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:51:14 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/21 17:13:21 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[0])
		return ((char*)big);
	while (big[i])
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j])
		{
			j++;
			if (little[j] == 0 || j == len)
				return ((char*)big+i);
		}
		i++;
	}
	return (0);
}

/*
int	main()
{
	char*	big = "abcde";
	char	little[] = "zbcde";
	size_t	len = 3;
	printf("%s\n", ft_strnstr(big, little, len));
	printf("%s", strnstr(big, little, len));
}
*/
