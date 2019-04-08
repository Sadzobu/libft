CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rc
RANLIB  = ranlib

NAME    = libft.a
HEAD    = libft.h

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME):
		@$(CC) $(CFLAGS) -c srcs/*.c -I includes/
		@$(AR) $(NAME) *.o
		@$(RANLIB) $(NAME)

so:
		gcc -Wall -Wextra -Werror -shared -o libft.so *.o

clean:
		@rm -f *.o

fclean: clean
		@rm -f $(NAME)
		@rm -f libft.so

re: fclean all
