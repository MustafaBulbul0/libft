/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:21:05 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/12 17:40:52 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t num)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = ft_strlen(str2);
	if (ft_strlen(str2) == 0)
		return ((char *)str1);
	while (i < num)
	{
		j = 0;
		while ((str1[i + j] == str2[j]) && (i + j < num))
		{
			if (j == k - 1)
				return ((char *)&str1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
