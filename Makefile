CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rc
RANLIB  = ranlib

NAME    = libft.a
HEAD    = libft.h

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME):
		@$(CC) $(CFLAGS) -c *.c
		@$(AR) $(NAME) *.o
		@$(RANLIB) $(NAME)

so:
		gcc -Wall -Wextra -Werror -shared -o libft.so *.o

clean:
		@rm -f *.o

fclean: clean
		@rm -f $(NAME)

re: fclean all
