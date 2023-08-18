NAME		=	DiamondTrap

CXX			=	c++

SRCS		=	ClapTrap.cpp \
				FragTrap.cpp \
				DiamondTrap.cpp \
				ScavTrap.cpp \
				main.cpp

CXXFLAGS	=	-Wall -Wextra -Werror -Wshadow -g -std=c++98 #-fsanitize=address

RM			=	rm -f

OBJS		=	$(SRCS:%.cpp=%.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(OBJS) $(CXXFLAGS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
