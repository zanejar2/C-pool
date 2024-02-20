NAME = Data
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE = main.cpp Serializer.cpp 
RM = rm -rf
OBJ = $(SOURCE:.cpp=.o)
HEADER = Serializer.hpp

all: 		$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re