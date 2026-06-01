/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 15:13:15 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/20 15:18:05 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*d;
	const void	*s;
	size_t	i;
	char	temp[n];

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
	        temp[i] = *(char *)s;
		*(char *)d = temp[i];
		d++;
		s++;
		i++;
	}
	return dest;
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
	memmove(dest, src, n);
	printf("\nArray after memmove()\n");
	printArray(dest, n);

	bzero(dest, n*sizeof(dest[0]));
	ft_memmove(dest, src, n);
	printf("\nArray after ft_memmove()\n");
	printArray(dest, n);

	return 0;
}
*/
