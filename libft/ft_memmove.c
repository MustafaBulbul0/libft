/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:05:42 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/12 10:49:56 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*n_dest;
	unsigned char		*n_src;
	size_t				i;

	n_dest = (unsigned char *)dest;
	n_src = (unsigned char *)src;
	if (n_dest == n_src || n == 0)
		return (dest);
	else if (n_dest < n_src)
	{
		i = 0;
		while (i < n)
		{
			n_dest[i] = n_src[i];
			i++;
		}
	}
	else
		i = n;
	while (i > 0 && n_dest > n_src)
	{
		n_dest[i - 1] = n_src[i - 1];
		i--;
	}
	return (dest);
}
