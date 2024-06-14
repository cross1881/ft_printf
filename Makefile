# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 15:46:11 by mrossett          #+#    #+#              #
#    Updated: 2024/05/28 21:43:37 by mrossett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = 		ft_printf.c ft_printchar.c ft_printstr.c ft_printpoint.c \
			ft_printdecimal.c ft_printundecimal.c ft_strlen.c		

OBJ = 		$(SRC:.c=.o)
CC = 		gcc
RM = 		rm -f
FLAGS = 	-Wall -Wextra -Werror -I.

NAME = 		libftprintf.a

$(NAME):	${OBJ}
			ar rcs $(NAME) $(OBJ)
			
all:		$(NAME)

clean:
			$(RM) $(OBJ) 

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all, clean, fclean, re








