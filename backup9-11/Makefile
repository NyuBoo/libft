# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yanaranj <yanaranj@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 14:32:13 by yanaranj          #+#    #+#              #
#    Updated: 2023/11/09 14:18:18 by yanaranj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#VAR

NAME = libft.a
SRC	=	ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_putchar_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_putstr_fd.c	\
		ft_strlcat.c	\
		ft_strlcpy.c	\
		ft_strlen.c		\
		ft_tolower.c	\
		ft_toupper.c	\
		ft_atoi.c		\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_strdup.c		\
		ft_memset.c		\
		ft_calloc.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_bzero.c		\
		ft_substr.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_itoa.c

OBJS = $(SRC:.c=.o)

CFLAGS = gcc -Wall -Wextra -Werror

HEADER = libft.h

AR	= ar rcs

MAKE = Makefile

#REGLAS

all : $(NAME)

%.o	: %.c $(HEADER) $(MAKE)
	$(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)

clean:	
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re 
