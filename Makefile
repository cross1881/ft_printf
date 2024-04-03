# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 15:46:11 by mrossett          #+#    #+#              #
#    Updated: 2024/03/20 13:03:13 by mrossett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 		ft_printf.c ft_printchar.c ft_printstr.c ft_printpoint.c \
			ft_printdecimal.c ft_printbigesadecimal.c ft_printesadecimal.c \
			ft_printunsigned.c

FLAGS = 	-Wall -Wextra -Werror -I.
CC = 		gcc
RM = 		rm -f
OBJ = 		$(SRC:.c=.o)

.o:			.c
			$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

NAME = 		libftprintf.a

$(NAME):	${OBJ}
			@make bonus -C libft libft.a
			@cp libft/libft.a ./$(NAME)
			@ar rcs $(NAME) $(OBJ)

all:		$(NAME)

clean:
			$(RM) $(OBJ)
			@make fclean -C libft $(OBJ)

fclean:		clean
			$(RM) $(NAME)
			$(RM) libft/libft.a

re:			fclean $(NAME)

.PHONY:		all, clean, fclean, re
