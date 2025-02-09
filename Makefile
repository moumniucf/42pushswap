NAME = push_swap
CHECKER = checker

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADER = push_swap.h
B_HEADER = checker_bonus.h

SRCS = creatstack.c push_swap.c swapab.c ft_lstlast.c ft_split.c  push_ab.c rotateab.c rev_rotate.c ft_atoi.c\
sortingtfv.c parss.c ft_isdigit.c ft_lstsize.c ft_lstadd_back.c checkerror.c duplicat.c sortingall.c stacksort.c
B_SRCS = ft_split.c checker_bonus.c ft_isdigit.c getnextline/get_next_line.c getnextline/get_next_line_utils.c
OBJS = $(SRCS:%.c=%.o)
B_OBJS = $(B_SRCS:%.c=%.o)

all : $(NAME)

%.o : %.c $(HEADER)
	@$(CC) -c $< $(CFLAGS) -o $@
	@echo "compiling" $< "to" $@

$(NAME) : $(OBJS) $(HEADER)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
#//                    bonus                  //#
bonus : $(CHECKER)
%.o : %.c $(B_HEADER)
	@$(CC) -c $< $(CFLAGS) -o $@
	@echo "compiling" $< "to" $@
$(CHECKER) : $(B_OBJS) $(HEADER)
	@$(CC) $(CFLAGS) $(B_OBJS) -o $(CHECKER)
clean : 
	@rm -f $(OBJS) $(B_OBJS)
fclean : clean
	@rm -f $(NAME) $(CHECKER)
re : fclean all bonus
PHONY : fclean