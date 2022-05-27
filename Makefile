NAME = get_next_line

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g
SRC = get_next_line.c /
	get_next_line_utils.c
	
	
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	 
%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	rm -rf $(OBJ)

fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re