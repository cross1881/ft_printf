# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 15:46:11 by mrossett          #+#    #+#              #
#    Updated: 2024/04/03 13:00:22 by mrossett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRC = 		ft_printf.c ft_printchar.c ft_printstr.c ft_printpoint.c \
			ft_printdecimal.c ft_printesadecimal.c \
			ft_printunsigned.c ft_strlen.c

OBJ = 		$(SRC:.c=.o)
CC = 		gcc
RM = 		rm -f
FLAGS = 	-Wall -Wextra -Werror -I.

NAME = 		lftprintf.a

all:		$(NAME)

$(NAME):	${OBJ}
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ) 

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all, clean, fclean, re








