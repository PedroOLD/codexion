CC = cc
FLAGS = -Wall -Werror -Wextra
NAME = a.out
SRCS = ./utils/functions_list/create_node.c \
		./codexion.c \
		./main.c
OBJS = $(SRCS:.c=.o)

.o.: .c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS) && cd ./utils && rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
