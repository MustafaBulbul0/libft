/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:05:42 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/11 23:47:38 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n) {
    unsigned char*  nDest;
    unsigned char*  nSrc;
    size_t          i;

    i = 0;
    nDest = (unsigned char *)dest;
    nSrc = (unsigned char *)src;
    if (nDest < nSrc) {
        while (i < n) {
            nDest[i] = nSrc[i];
            i++;
        }
    } else {
        while (i < sizeof(src)) {
            nDest[i] = nSrc[i];
            i++;
        }
    }
    return (dest);
}