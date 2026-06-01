/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:09:00 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/27 17:21:34 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	unsigned int	i;

	i = 0;
	d = malloc(len*sizeof(char));
	if (!d)
		return NULL;
	while (i < len)
	{
		d[i] = s[i + start];
		i++;
	}	
	return (d);
}
/*
int	main()
{
	char	*s = "diocane";
	char	*d = ft_substr(s, 3, 5);
	printf("%s\n", d);
	free(d);
}
*/
