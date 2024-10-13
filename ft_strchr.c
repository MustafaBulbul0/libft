/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:55:11 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/12 09:44:46 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int				i;
	unsigned char	new_ch;

	i = 0;
	new_ch = (unsigned char)ch;
	while (str[i])
	{
		if (str[i] == new_ch)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
