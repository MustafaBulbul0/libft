/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:29:52 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/10 18:02:42 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, unsigned int sizeDest)
{
	unsigned int	i;

	i = 0;
	ft_memset(dest, NULL, sizeof(dest))
	while (src[i] && (i < sizeDest))
	{
	dest[i] = src[i];
		i++;
	}
	dest[sizeDest] = '\0';
	return (ft_strlen(dest));
}
