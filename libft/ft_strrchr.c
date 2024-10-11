/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:15:33 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/11 23:01:57 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;
	unsigned char newCh;	

	i = sizeof(str);
	newCh = (unsigned char)ch;
	while (i != -1)
	{
		if (str[i] == newCh)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
