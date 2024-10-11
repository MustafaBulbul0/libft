/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:33:53 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/11 22:47:57 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest,const char *src, size_t sizeDest)
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
