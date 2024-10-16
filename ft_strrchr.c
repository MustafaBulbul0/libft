/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:21:28 by mubulbul          #+#    #+#             */
/*   Updated: 2024/10/16 15:21:29 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int				i;
	unsigned char	new_ch;

	i = sizeof(str);
	new_ch = (unsigned char)ch;
	while (i != -1)
	{
		if (str[i] == new_ch)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
