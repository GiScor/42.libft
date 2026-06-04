/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:09:00 by gscorzon          #+#    #+#             */
/*   Updated: 2026/06/04 19:16:01 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;

	i = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	d = malloc(len * sizeof(char) + 1);
	if (!d)
		return (NULL);
	while (i < len && s[i] && s[i + start])
	{
		d[i] = s[i + start];
		i++;
	}
	d[i] = 0;
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
