NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADER = push_swap.h

SRC = creatstack.c push_swap.c swapab.c

OBG = $(SRC:%.c=%.o)

all : $(NAME)

%.o : %.c $(HEADER)
	@$(CC) -c $< $(CFLAGS) -o $@
	@echo "compiling" $< "to" $@

$(NAME) : $(OBG)
	@ar rc $(NAME) $(OBG)
clean : 
	@rm -f $(OBG)
fclean : clean
	@rm -f $(NAME)
re : fclean all
PHONY : fclean