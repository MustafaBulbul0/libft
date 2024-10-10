/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:21:05 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/10 18:10:08 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str1, char *str2, int num)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = ft_strlen(str2);
	while (i < 0)
	{
		j = 0;
		while ((str1[i + j] == str2[j]) && (i + j) < num)
			j++;
		if (j == k)
			return (&str1[i]);
		i++;
	}
	return (NULL);
}
