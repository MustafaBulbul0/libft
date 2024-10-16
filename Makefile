# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mubulbul <mubulbul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 15:24:15 by mubulbul          #+#    #+#              #
#    Updated: 2024/10/16 16:56:06 by mubulbul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAF = -Wall -Wextra -Werror
CC = gcc
FILE = ft_atoi.c	/ 
		ft_lstadd_back.c	/
		ft_memchr.c	/
		ft_split.c	/
		ft_strncmp.c	/
		ft_bzero.c	/
		ft_lstadd_front.c	/
		ft_memcmp.c	/
		ft_strchr.c	/
		ft_strnstr.c	/
		ft_calloc.c	/
		ft_lstclear.c	/
		ft_memcpy.c	/
		ft_strdup.c	/
		ft_strrchr.c	/
		ft_isalnum.c	/
		ft_lstdlone.c	/
		ft_memmove.c	/
		ft_striteri.c	/
		ft_strtrim.c	/
		ft_isalpha.c	/
		ft_lstiter.c	/
		ft_memset.c	/
		ft_strjoin.c	/
		ft_substr.c	/
		ft_isascii.c	/
		ft_lstlast.c	/
		ft_putchar_fd.c	/
		ft_strlcat.c	/
		ft_tolower.c	/
		ft_isdigit.c	/
		ft_lstmap.c	/
		ft_putendl.c	/
		ft_strlcpy.c	/
		ft_toupper.c	/
		ft_isprint.c	/
		ft_lstnew.c	/
		ft_putnbr_fd.c	/
		ft_strlen.c	/
		ft_itoa.c	/
		ft_lstsize.c	/
		ft_putstr_fd.c	/
		ft_strmapi.c	/
OBJ = ($(FILE) = *.c : *.o)
RM = rm -f

all : 
	${AR}  $(NAME)

clean : $(RM) *.o 

fclean : clean 
		$(RM) $(NAME)
.PHONY: clean fclean all