# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykilicar <ykilicar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/25 15:14:43 by ykilicar          #+#    #+#              #
#    Updated: 2023/07/06 17:16:35 by ykilicar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = server

NAME2 = client

all :
	@make -C ./utils
	@gcc -Wall -Wextra -Werror server.c ./utils/libftprintf.a -o $(NAME1)
	@gcc -Wall -Wextra -Werror client.c ./utils/libftprintf.a -o $(NAME2)

clean :
	@make clean -C ./utils
	@rm -rf client.o server.o

fclean : clean
	@make fclean -C ./utils
	@rm -rf $(NAME1) $(NAME2)

re : fclean all
