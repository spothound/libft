# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 20:39:27 by fnavarro          #+#    #+#              #
#    Updated: 2023/09/16 12:02:04 by fnavarro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = libft.a
SOURCES := $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = cc

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -crs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	@rm -f $(OBJECTS)
	@echo ".o files deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "directory cleaned"

re: fclean all
