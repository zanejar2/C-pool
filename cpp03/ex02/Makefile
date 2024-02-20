# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 21:42:00 by zanejar           #+#    #+#              #
#    Updated: 2023/04/28 01:08:08 by zanejar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  FragTrap
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SOURCE = ClapTrap.cpp FragTrap.cpp main.cpp 
RM = rm -rf
OBJ = $(SOURCE:.cpp=.o)
HEADER =  ClapTrap.hpp FragTrap.hpp

all: 		$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re