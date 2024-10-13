/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:00:40 by mubulbul          #+#    #+#             */
/*   Updated: 2024/10/14 00:08:08 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	next_trim(char const *s1, char const *set);
static size_t	back_trim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	b_trim;
	size_t	n_trim;
	size_t	n_total_size;
	size_t	i;
	char	*ptr;

	i = 0;
	n_trim = next_trim(s1, set);
	b_trim = back_trim(s1, set);
	n_total_size = ft_strlen(s1) - n_trim - b_trim;
	ptr = (char *)malloc(n_total_size + 1);
	while (i < n_total_size)
	{
		ptr[i] = s1[n_trim + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static size_t	next_trim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	l = 0;
	k = 1;
	j = 0;
	while (k)
	{
		k = 0;
		i = 0;
		while (set[i])
		{
			if (set[i] == s1[l])
			{
				j++;
				k = 1;
			}
			i++;
		}
		l++;
	}
	return (j);
}

static size_t	back_trim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	l = ft_strlen(s1);
	k = 1;
	j = 0;
	while (k)
	{
		k = 0;
		i = 0;
		while (set[i])
		{
			if (set[i] == s1[l - 1])
			{
				j++;
				k = 1;
			}
			i++;
		}
		l--;
	}
	return (j);
}
