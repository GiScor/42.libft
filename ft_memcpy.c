/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:54:20 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/20 15:12:57 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
		i++;
	}
	return dest-i;
}
/*
void printArray(int arr[], int n)
{
	for (int i=0; i<n; i++)
		printf("%d ", arr[i]);
}

int main()
{
	int n = 10;
	int dest[n];
	int src[10] = {'a','b','c','d','e','f','g','h','i','j'};

	bzero(dest, n*sizeof(dest[0]));
	memcpy(dest, src, n*sizeof(dest[0]));
	printf("\nArray after memcpy()\n");
	printArray(dest, n);

	bzero(dest, n*sizeof(dest[0]));
	ft_memcpy(dest, src, n*sizeof(dest[0]));
	printf("\nArray after ft_memcpy()\n");
	printArray(dest, n);

	return 0;
}
*/
