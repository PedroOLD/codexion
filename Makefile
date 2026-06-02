CC = cc
FLAGS = -Wall -Werror -Wextra
NAME = codexion
SRCS = ./utils/functions_list/create_node.c \
		./utils/functions_list/print_list.c \
		./utils/is_valid_datas.c \
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
