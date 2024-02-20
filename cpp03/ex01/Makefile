# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 21:42:00 by zanejar           #+#    #+#              #
#    Updated: 2023/04/27 22:08:25 by zanejar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  ScavTrap
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SOURCE =  ScavTrap.cpp ClapTrap.cpp main.cpp 
RM = rm -rf
OBJ = $(SOURCE:.cpp=.o)
HEADER =  ScavTrap.hpp ClapTrap.hpp

all: 		$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re