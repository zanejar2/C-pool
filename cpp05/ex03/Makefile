NAME = Intern
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE = 	Bureaucrat.cpp AForm.cpp main.cpp \
			ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp Intern.cpp
RM = rm -rf
OBJ = $(SOURCE:.cpp=.o)
HEADER =	Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp \
			RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
 
all: 		$(NAME)
  
$(NAME):	$(OBJ) $(HEADER)
			$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re