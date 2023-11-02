# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcouchma <kcouchma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 10:58:01 by kcouchma          #+#    #+#              #
#    Updated: 2023/11/02 15:26:44 by kcouchma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_printf \
		ft_putbase

SRC = $(addsuffix .c,$(SRCS))
OBJ = $(addsuffix .o,$(SRCS))

CC = cc
CCFLAGS = -Wall -Wextra -Werror -I libft
INC_FILES = -I libft

NAME = libftprintf.a

all: $(NAME)

$(NAME) : $(OBJ)
	make -C libft
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) -c -o $@ $< $(CCFLAGS) $(INC_FILES)

clean :
	make -C libft clean
	rm -rf $(OBJ)

fclean : clean
	make -C libft fclean
	rm -rf $(NAME)

re : fclean
	make

.PHONY : all clean fclean re