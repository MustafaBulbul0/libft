/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:20:46 by mubulbul          #+#    #+#             */
/*   Updated: 2024/10/16 15:20:47 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t sizeDest)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[sizeDest] = src[i];
		i++;
		sizeDest++;
	}
	dest[sizeDest] = '\0';
	return (sizeDest - 1);
}
