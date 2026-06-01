/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 12:56:24 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/22 13:08:04 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(const char *s)
{
	int	len;
	char	*dup;

	len = 0;
	while (s[len])
		len++;
	dup = malloc(len*sizeof(char));
	while(len >= 0)
	{
		dup[len] = s[len];
		len--;
	}
	return (dup);
}
/*
int	main()
{
	char	*s1 = "hgfeiafgawuo";
	char	*s2 = ft_strdup(s1);
	char	*s3 = strdup(s1);
	printf("\n%s\n",s2);
	printf("\n%s\n",s3);
}
*/
