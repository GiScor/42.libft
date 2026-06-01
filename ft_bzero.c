/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:47:50 by gscorzon          #+#    #+#             */
/*   Updated: 2026/06/01 18:38:54 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
			*ptr++ = 0;
	return s;
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
    int arr[n];

    bzero(arr, n*sizeof(arr[0]));
    printf("\nArray after bzero()\n");
    printArray(arr, n);

    ft_bzero(arr, n*sizeof(arr[0]));
    printf("\nArray after ft_bzero()\n");
    printArray(arr, n);

    return 0;
}
*/
