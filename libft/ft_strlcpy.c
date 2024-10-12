/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:29:52 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/12 09:47:56 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t sizeDest)
{
	size_t	i;

	i = 0;
	ft_bzero(dest, sizeof(dest));
	while (src[i] && (i < sizeDest))
	{
		dest[i] = src[i];
		i++;
	}
	dest[sizeDest] = '\0';
	return (ft_strlen(dest));
}
