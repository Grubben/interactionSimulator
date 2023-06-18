NAME		= interacter

## COMPILATION
# CC			= c
CXX			= c++
# Compilation Flags
CFLAGS		=-g -Wall -Wextra #-Werror
CXXFLAGS	=-g -Wall -Wextra #-Werror

# Removal Flags. Not sure if necessary
RM			= rm -rf

SRCS		= $(wildcard *.cpp)

OBJS		= $(SRCS:.cpp=.o)

$(NAME)		: $(OBJS)
				$(CXX) $(CFLAGS) -o $(NAME) $(OBJS)

%.o			: %.cpp
				$(CXX) $(CFLAGS) -c -o $@ $<

all			: $(NAME)

clean		:
				$(RM) $(OBJS)

fclean		: clean
			$(RM) $(NAME)

re			: fclean $(NAME)

c			: clean

f			: fclean

r			: re

.PHONY		: re fclean clean all c f r
