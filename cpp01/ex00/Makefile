# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 03:09:41 by zanejar           #+#    #+#              #
#    Updated: 2023/04/11 03:09:42 by zanejar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SOURCE = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
RM = rm -rf
OBJ = $(SOURCE:.cpp=.o)

all: 		$(NAME)

$(NAME):	$(OBJ)
			$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re