/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 12:30:26 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/18 13:31:29 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	printf("c = %d\n", c);
	return (c >= 0 && c <= 127);
}

/*
int	main()
{
	int	c;

	c = 8;
	printf("%d\n",ft_isascii(c));
	printf("%d\n",isascii(c));

	c = -10000;
	printf("%d\n",ft_isascii(c));
	printf("%d\n",isascii(c));

	c = 'A';
	printf("%d\n",ft_isascii(c));
	printf("%d\n",isascii(c));
	
	c = 'ciao';
	printf("%d\n",ft_isascii(c));
	printf("%d\n",isascii(c));

	c = -5;
	printf("%d\n",ft_isascii(c));
	printf("%d\n",isascii(c));
}
*/
