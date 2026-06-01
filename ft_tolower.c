/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:54:00 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/20 18:55:42 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return c;
}
/*
int main ()
{
#include <stdio.h>
#include <ctype.h>
	printf("%c", ft_tolower('A'));
	printf("%c", tolower('A'));
}
*/
