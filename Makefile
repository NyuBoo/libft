# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yanaranj <yanaranj@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 14:32:13 by yanaranj          #+#    #+#              #
#    Updated: 2023/11/17 12:27:32 by yanaranj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#VAR

NAME = libft.a
CFLAGS = gcc -Wall -Wextra -Werror
AR	= ar rcs
RM = rm -f

HEADER = libft.h

SRC	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c	\
		ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_strchr.c ft_strrchr.c		\
		ft_strncmp.c ft_strnstr.c ft_strdup.c ft_substr.c ft_strjoin.c		\
		ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c ft_bzero.c		\
		ft_memcpy.c ft_memmove.c ft_memset.c ft_memchr.c ft_memcmp.c		\
		ft_calloc.c ft_toupper.c ft_tolower.c ft_atoi.c ft_itoa.c			\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRC_B =	ft_lstnew.c ft_lstadd_front.c

OBJS := $(SRC:.c=.o)
OBJS_B := $(SRC_B:.c=.o)

#REGLAS

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	@$(AR) $(NAME) $(OBJS)

bonus : $(OBJ) $(OBJS_B) $(HEADER)
	@$(AR) $(NAME) $(OBJS_B)

%.o	: %.c $(HEADER) Makefile
	$(CFLAGS) -c $(SRC) $(SRC_B)

clean:	
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)
	
re:	fclean all

.PHONY: all clean fclean re 
