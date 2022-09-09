NAME = libft.a

SRC = ft_atoi.c\
		ft_bzero.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c\

CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(OBJ): $(SRC) 
	gcc -c $(CFLAGS) $(SRC)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
