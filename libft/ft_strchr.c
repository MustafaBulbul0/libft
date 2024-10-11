/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:55:11 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/11 22:43:14 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;
	unsigned char	newCh;

	i = 0;
	newCh = (unsigned char)ch;
	while (str[i])
	{
		if (str[i] == newCh)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
