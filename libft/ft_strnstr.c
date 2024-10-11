/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:21:05 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/11 22:59:41 by mustafa          ###   ########.fr       */
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
