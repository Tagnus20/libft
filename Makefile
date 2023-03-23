# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/13 11:21:23 by averdejo          #+#    #+#              #
#    Updated: 2023/03/24 00:33:51 by averdejo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalpha.c ft_isdigit.c ft_strlcpy.c ft_tolower.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlcat.c ft_strlen.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_atoi.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c
OBJ = $(SRC:%.c=%.o)
INCLUDE = libft.h
NAME = libft.a
all: $(NAME)
$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re
