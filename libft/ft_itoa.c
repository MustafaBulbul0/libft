/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 21:33:13 by mubulbul          #+#    #+#             */
/*   Updated: 2024/10/13 23:07:29 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_num_value(int n, char *num, int last_ind);

char	*ft_itoa(int n)
{
	char	*num;
	int		i;
	int		last_ind;
	int		n_cpy;

	i = 0;
	n_cpy = n;
	if (n == -2147483648)
		return ("-2147483648");
	while (n_cpy != 0)
	{
		n_cpy /= 10;
		i++;
	}
	if (n < 0)
	{
		num = (char *)malloc((i + 2) * sizeof(char));
		num[0] = '-';
	}
	else if (n > 0)
		num = (char *)malloc((i + 1) * sizeof(char));
	if (!num && n != 0)
		return (NULL);
	last_ind = i -1;
	return (ft_num_value(n, num, last_ind));
}

static char	*ft_num_value(int n, char *num, int last_ind)
{
	int	n_li;

	if (n < 0)
	{
		last_ind++;
		n *= -1;
	}
	n_li = last_ind;
	if (n == 0)
	{
		num = (char *)malloc(2 * sizeof(char));
		if (!num)
			return (NULL);
		num[0] = '0';
		num[1] = '\0';
		return (num);
	}
	while (n != 0)
	{
		num[last_ind] = (n % 10) + '0';
		n /= 10;
		last_ind--;
	}
	num[n_li + 1] = '\0';
	return (num);
}
