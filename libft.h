/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:05:21 by mubulbul          #+#    #+#             */
/*   Updated: 2024/10/13 23:50:09 by mubulbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_atoi(const char *chNum);
void	ft_bzero(void *str, size_t sizeStr);
void	*ft_calloc(size_t arrSize, size_t varSize);
int		ft_isalnum(int noa);
int		ft_isalpha(int character);
int		ft_isascii(int isac);
int		ft_digit(int num);
int		ft_isprint(int isprintable);
void	*ft_memchr(const void *str, int c, size_t num);
int		ft_memcmp(const void *str1, const void *str2, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int newCh, size_t sizeStr);
char	*ft_strchr(const char *str, int ch);
size_t	ft_strlcat(char *dest, const char *src, size_t sizeDest);
size_t	ft_strlcpy(char *dest, const char *src, size_t sizeDest);
size_t	ft_strlen(const char *len);
int		ft_strncmp(const char *str1, const char *str2, size_t chNum);
char	*ft_strnstr(const char *str1, const char *str2, size_t num);
char	*ft_strrchr(const char *str, int ch);
char	ft_tolower(int down);
int		ft_toupper(int up);
char	*ft_strdup(const char *str);

#endif
