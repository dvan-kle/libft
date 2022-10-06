# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dvan-kle <dvan-kle@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/06 10:52:57 by dvan-kle      #+#    #+#                  #
#    Updated: 2022/10/06 14:16:24 by dvan-kle      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC= gcc
NAME= libft.a
CFLAGS= -Wall -Wextra -Werror
SRC= ft_mem*.c ft_str*.c ft_to*.c ft_is*.c ft_atoi.c ft_bzero.c ft_calloc.c
OBJ= *.o

all: $(NAME)

$(NAME): $(OBJ)
	ar -cr $(NAME) $(OBJ)

$(OBJ):
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all	
