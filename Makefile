NAME = push_swap

SRC =	init_stack.c \
		lst_utils.c \
		push_swap.c \
		ft_split.c \
		utils.c \
		op_push.c \
		op_reverse_rotate.c \
		op_rotate.c \
		op_swap.c \
		int_tab.c \
		rotate.c \
		sort_five.c \
		sort.c \
		find.c \
		push_lis.c \
		find_lis/duplicate.c \
		find_lis/find_lis.c \
		find_lis/clone_sup.c \
		find_lis/sup_ends.c \
		find_lis/between_ends.c \
		free.c \
		exec.c \
		error_check.c \
		$(addprefix lst_utils/, \
		ft_lstadd_back.c   ft_lstnew.c   ft_uplstlast.c my_lstlast.c \
		ft_lstadd_front.c  ft_lstlast.c  ft_lstsize.c   ft_uplstnew.c \
		ft_uplstadd_back.c)

OBJ = $(SRC:.c=.o)


CC = cc

CFLAGS = -Wall -Wextra -Werror -g

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