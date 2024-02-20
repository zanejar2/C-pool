# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 03:10:58 by zanejar           #+#    #+#              #
#    Updated: 2023/04/11 03:10:59 by zanejar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = human
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SOURCE = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
RM = rm -rf
OBJ = $(SOURCE:.cpp=.o)
HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp

all: 		$(NAME)

$(NAME):	$(OBJ) $(HEADERS)
			$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re