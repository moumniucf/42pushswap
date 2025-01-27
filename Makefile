NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADER = push_swap.h

SRCS = creatstack.c push_swap.c swapab.c ft_lstlast.c ft_split.c  push_ab.c rotateab.c rev_rotate.c ft_atoi.c\
sortingtfv.c parss.c ft_isdigit.c

OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

%.o : %.c $(HEADER)
	@$(CC) -c $< $(CFLAGS) -o $@
	@echo "compiling" $< "to" $@

$(NAME) : $(OBJS) $(HEADER)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean : 
	@rm -f $(OBJS)
fclean : clean
	@rm -f $(NAME)
re : fclean all
PHONY : fclean