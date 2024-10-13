/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:03:16 by mubulbul          #+#    #+#             */
/*   Updated: 2024/10/13 14:01:50 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	len_s;
	unsigned int	i;
	char			*res;

	len_s = ft_strlen(s);
	i = 0;
	if (!s)
		return (0);
	if (start >= len_s)
		return ((char *)malloc(1));
	if (len_s < start + len)
		len = len_s - start;
	res = (char *)malloc(len + 1);
	if (!res)
		return (0);
	while (len > i && s[start + i] != '\0')
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
