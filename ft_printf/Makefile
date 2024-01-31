# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrossett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 15:26:40 by mrossett          #+#    #+#              #
#    Updated: 2024/01/31 13:13:07 by mrossett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=	ft_printf.c ft_len.c ft_in_set.c ft_str_add.c ft_str_write.c \
	ft_str_clear.c ft_parse_flags.c ft_malloc_decimal.c \
	ft_format_signed.c ft_format_hex.c ft_format_str.c \
	ft_format_missing.c ft_do_free.c ft_add_format.c ft_clear_all.c

NAME	= libftprintf.a

FLAGS	= -Wall -Werror -Wextra -I -g
CC		= gcc
OBJ		= $(SRC:.c=.o)

.o:.c
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}
$(NAME):	${OBJ}
	@make bonus -C libft libft.a
	@cp libft/libft.a ./libftprintf.a
	@ar rcs $(NAME) $(OBJ)
all:	$(NAME)

clean:
	@rm -f $(OBJ)
	@make fclean -C libft
fclean:	clean
	@rm -f $(NAME)
re:	fclean all

.PHONY:		all, clean, fclean, re

# OBJS = $(SRCS:.c=.o)

# BONUS =

# Bonus_OBJS = $(BONUS:,c=.o)

# CC = gcc
# RM = rm -f
# CFLAGS = -Wall -Wextra -Werror -I -g

# NAME = libftprintf.a

# all:$(NAME)

# $(NAME):	$(OBJS)
# 	make -C libft libft.a
# 	cp libft/libft.a ./libftprintf.a
# 	ar rcs $(NAME) &(OBJS)
# clean:
# 	$(RM) $(OBJS) $(BONUS_OBJS)

# fclean:	clean
# 		$(RM) $(NAME)

# re:	fclean $(NAME)

# bonus:	$(OBJS) $(BONUS_OBJS)
# 		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# .PHONY:	all clean fclean re bonus

