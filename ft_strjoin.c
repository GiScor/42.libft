/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:34:30 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/25 14:56:13 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	l1;
	size_t	l2;
	size_t	i;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	s3 = malloc((l1 + l2) * sizeof(char));
	i = 0;
	while(i < l1)
	{
		s3[i] = s1[i];
		i++;
	}
	i = 0;
	while(i < l2)
	{
		s3[i + l1] = s2[i];
		i++;
	}
	return(s3);
}
