# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykilicar <ykilicar@student.42istanbul.com  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/25 15:12:58 by ykilicar          #+#    #+#              #
#    Updated: 2023/05/25 15:12:59 by ykilicar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_printf.c utils.c ft_atoi.c

OBJS 		= $(SRCS:.c=.o)

CC			= gcc
CFLAGS		=-Wall -Wextra -Werror

NAME		= libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)
clean:
			rm -f $(OBJS)

fclean: 
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
