# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 15:46:11 by mrossett          #+#    #+#              #
#    Updated: 2024/03/19 19:55:53 by mrossett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_printchar.c ft_printstr.c ft_pritnpoint.c \
		ft_printdecimal.c ft_printbigesadecimal.c ft_printesadecima.c \
		ft_printunsigned.c

FLAGS = -Wall -Wextra -Werror -I - g
CC = gcc
OBJ = $(src:.c=.o)

.o:.c
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

$(NAME):	${OBJ}
	@make bonus -C libft libft.a
	@cp libft/libft.a ./libftprintf.a
	@ar rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:
	@rm -f $(OBJ)
	@make fclean -C libft $(OBJ)

fclean:	clean
	@rm -f $(NAME)
	@rm -f libft/libft.a

re:	fclean all

.PHONY:		all, clean, fclean, re
