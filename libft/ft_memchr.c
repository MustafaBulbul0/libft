/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:51:02 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/10 19:01:07 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t num)
{
	size_t			i;
	char			newC;
	unsigned char	*ptr;

	i = 0;
	newC = c;
	ptr = (unsigned char *)str;
	while (ptr[i] && i < num)
	{
		if (ptr[i] == newC)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
