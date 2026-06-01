/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:42:32 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/18 13:57:17 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main()
{
	int	c;

	for (c = -32; c < 53; c++)
	{
		printf("c = %c\n", c);
		printf("ft_isprint: %d\n",ft_isprint(c));
		printf("isprint: %d\n",isprint(c));
	}
}
*/
