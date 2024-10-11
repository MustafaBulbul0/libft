/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:36:09 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/11 23:41:06 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n) {
    unsigned char*  nDest;
    unsigned char*  nSrc;
    size_t          i;

    i = 0;
    nDest = (unsigned char *)dest;
    nSrc = (unsigned char *)src;
    while (i < n)
    {
        nDest[i] = nSrc[i];
        i++;
    }
    return (dest);
}
