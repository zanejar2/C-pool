# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 21:14:40 by zanejar           #+#    #+#              #
#    Updated: 2023/04/27 21:15:36 by zanejar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SOURCE = ClapTrap.cpp main.cpp 
RM = rm -rf
OBJ = $(SOURCE:.cpp=.o)
HEADER = ClapTrap.hpp

all: 		$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re