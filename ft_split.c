/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscorzon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:04:51 by gscorzon          #+#    #+#             */
/*   Updated: 2026/05/27 17:52:12 by gscorzon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		if (*s != c && (*(s+1) == c || *(s+1) == 0))
			count++;
		s++;
	}
	return (count);
}

static int	ft_sublen(char const *s, char c, int i)
{
	int	j;
	int	l;

	j = 0;
	l = 0;
	while (i > 0)
	{
		if (s[j] == c && s[j-1] != c)
			i--;
		else
			j++;
	}
	if (s[j] !=  c && s[j-1] == c)
		i--;
	while (s[j] == c)
		j++;
	while (s[j] != c && s[j])
	{
		j++;
		l++;
	}
	return(l+1);
}

static char	**ft_arrfill(char **arr, char const *s, char c, size_t arrnum)
{
	size_t	i;
	int	j;
	int	k;

	j = 0;
	i = 0;
	k = 0;
	while (i < arrnum)
	{
		arr[i] = (char *)malloc(ft_sublen(s,c,i)*sizeof(char) + 1);
		if (!arr[i])
		{
			return (NULL);
			free(arr);
		}
		arr[i][ft_sublen(s,c,i)] = 0;
		// ft_strlcpy(arr[i], s+j, ft_sublen(s,c,i));
		while (s[k])
		{
			if (s[k] && s[k] == c && s[k-1] != c)
			{
				arr[i][j] = 0;
				j = 0;
				k++;
				break ;
			}
			else if (s[k] == c && s[k-1] == c)
				k++;
			else
			{
				arr[i][j] = s[k];
				k++;
				j++;
			}
		}
		i++;
	}
	return(arr);
}

char **ft_split(char const *s, char c)
{
	size_t	i;
	int	j;
	size_t	arrnum;
	char	**arr;
	char	*trimd;

	i = 0;
	j = 0;
	arrnum = ft_countword(s, c);
	arr = (char **)malloc(sizeof(char *) * (arrnum + 1));
	trimd = ft_strtrim(s, &c);
	if (!arr)
		return (NULL);
	arr[arrnum] = 0;
	arr = ft_arrfill(arr, trimd, c, arrnum);
	return (arr);
}
