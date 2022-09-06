NAME = libft.a

OBJS = ft_atoi.o\
		ft_bzero.o\
		ft_isalnum.o\
		ft_isascii.o\
		ft_isalpha.o\
		ft_isdigit.o\
		ft_isprint.o\
		ft_memset.o\
		ft_strchr.o\
		ft_strlcat.o\
		ft_strlcpy.o\
		ft_strlen.o\
		ft_strncmp.o\
		ft_strrchr.o\
		ft_tolower.o\
		ft_toupper.o\

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs libft.a $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
