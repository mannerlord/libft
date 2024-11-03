NAME = libft.a

CFILES = ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c \
         ft_tolower.c ft_toupper.c ft_atoi.c

OFILES = $(CFILES:.c=.o)



CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: $(NAME)

${NAME}: ${OFILES}
	${CC} ${FLAGS} -c ${CFILES}
	ar rc ${NAME} ${OFILES}

clean:
	$(RM) $(OFILES)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re

run:
	$(CC) $(FLAGS) main.c $(NAME) -o program && ./program
