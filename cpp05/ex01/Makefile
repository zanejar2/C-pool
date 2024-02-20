NAME = Form
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE =  Bureaucrat.cpp Form.cpp main.cpp
RM = rm -rf
OBJ = $(SOURCE:.cpp=.o)
HEADER = Bureaucrat.hpp Form.hpp

all: 		$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re