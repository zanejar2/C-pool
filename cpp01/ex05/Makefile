# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 04:06:39 by zanejar           #+#    #+#              #
#    Updated: 2023/04/12 04:52:36 by zanejar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SOURCE = main.cpp Harl.cpp
RM = rm -rf
OBJ = $(SOURCE:.cpp=.o)
HEADERS = Harl.hpp

all: 		$(NAME)

$(NAME):	$(OBJ) $(HEADERS)
			$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re