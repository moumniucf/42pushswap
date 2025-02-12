NAME = push_swap
CHECKER = checker

CC = cc

CFLAGS = -Wall -Wextra -Werror
HEADER = push_swap.h
B_HEADER = checker_bonus.h

SRCS = creatstack.c push_swap.c swapab.c ft_lstlast.c ft_split.c  push_ab.c rotateab.c rev_rotate.c ft_atoi.c\
sortingtfv.c parss.c ft_isdigit.c ft_lstsize.c ft_lstadd_back.c checkerror.c duplicat.c sortingall.c stacksort.c\
sorttree.c sortfour.c sortfive.c 
B_SRCS = bonus/ft_split_bonus.c bonus/checker_bonus.c bonus/ft_isdigit_bonus.c bonus/getnextline/get_next_line.c bonus/getnextline/get_next_line_utils.c\
bonus/utils_bonus.c bonus/rotate_bonus.c  bonus/push_ab_bonus.c bonus/parss_bonus.c bonus/ft_lstadd_back_bonus.c bonus/checkercmp_bonus.c bonus/swap_bonus.c\
bonus/rev_rotate_bonus.c bonus/freestack2_bonus.c bonus/utils2_bonus.c bonus/utils4_bonus.c bonus/utils5_bonus.c bonus/utils3_bonus.c
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