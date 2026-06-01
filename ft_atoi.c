/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:14:11 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/22 13:38:27 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	sign;

	sign = 1;
	i = 0;
	j = 0;
	if (*nptr == '-')
	{
		sign *= -1;	
		nptr++;
		if (!(*nptr >= 48 && *nptr <= 57))
			return 0;
	}
	while (nptr)
	{
		if (*nptr >= 48 && *nptr <= 57)
		{
			i = *nptr - 48;
			j *= 10;
			j += i;
			nptr++;
		}
		else
			return (j*sign);
	}
	return (j*sign);
}

/*
int	main()
{
	char str[] = "-2147483653";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
}
*/
