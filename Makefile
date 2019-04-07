# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/07 12:58:57 by ikrkharb          #+#    #+#              #
#    Updated: 2019/04/07 13:52:07 by ikrkharb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
SRCS = srcs/*.c
INCLUDES = includes/libft.h
OBJ = *.o
NAME = libft.a
$(NAME): all
all:
	gcc ${FLAGS} -c ${SRCS}
	ar rc ${NAME} ${OBJ}
clean:
	/bin/rm -f ${OBJ}
fclean: clean
	/bin/rm -f ${NAME}
re: fclean all
