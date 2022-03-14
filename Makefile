NAME = push_swap

SRC =	init_stack.c \
		lst_utils.c \
		push_swap.c \
		ft_atoi.c 

OBJ = $(SRC:.c=.o)


CC = cc

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJ) push_swap.h
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY : clean fclean bonus re all