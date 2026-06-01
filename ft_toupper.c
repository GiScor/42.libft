/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:45:53 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/20 18:53:30 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return c;
}
/*
int main ()
{
#include <stdio.h>
#include <ctype.h>
	printf("%c", ft_toupper('a'));
	printf("%c", toupper('a'));
}
*/
