/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:20:46 by mubulbul          #+#    #+#             */
/*   Updated: 2024/10/18 23:21:34 by mustafa          ###   ########.fr       */
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
