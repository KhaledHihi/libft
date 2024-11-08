NAME = libft.a
CC = cc
FLAGS = -Werror -Wextra -Wall

SRC = 	ft_atoi.c		ft_isdigit.c	ft_memcpy.c	ft_putstr_fd.c	ft_strlcat.c	ft_strrchr.c \
		ft_bzero.c		ft_isprint.c	ft_memmove.c	ft_split.c		ft_strlcpy.c	ft_strtrim.c \
		ft_calloc.c		ft_itoa.c		ft_memset.c	ft_strchr.c		ft_strlen.c		ft_substr.c \
		ft_isalnum.c	ft_putchar_fd.c	ft_strdup.c		ft_strmapi.c		ft_tolower.c	ft_toupper.c \
		ft_isalpha.c	ft_memchr.c		ft_putendl_fd.c	ft_striteri.c	ft_strncmp.c \
		ft_isascii.c	ft_memcmp.c		ft_putnbr_fd.c	ft_strjoin.c	ft_strnstr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

run : 
	@$(CC) $(FLAGS) main.c libft.a && ./a.out