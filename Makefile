CC = CC
FLAGS = -Wall -Werror -Wextra
NAME = test
SRCS = 
OBJS = $(SRCS:.c=.o)

o.: .c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@s

all: $(NAME)

norm:
