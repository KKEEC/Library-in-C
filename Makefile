# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 16:55:20 by kkc               #+#    #+#              #
#    Updated: 2024/11/25 18:42:24 by kkc              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -I.

SRC_DIR = ./srcs

INCLUDES = ./headers/libftprintf.h

SOURCES = $(wildcard $(SRC_DIR)/*.c)

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME) : $(OBJECTS)
	ar crs $(NAME) $(OBJECTS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	@rm -f *.o ./srcs/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
