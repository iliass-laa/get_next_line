CC = cc
CFILES = get_next_line.c get_next_line_utils.c
CFLAGS = -Wall -Wextra -Werror
NAME = Malo.a
Object = $(CFILES:.c=.o)

all : $(NAME)

$(NAME) : $(Object)
	ar rcs $@  $^

%.o : %.c
	$(CC) -c $(CFlAGS)  $< -o $@

clean :
	rm -f $(Object)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY :all clean fclean re