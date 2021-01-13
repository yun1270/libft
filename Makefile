CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
FILES = ft_memset.c \
	ft_strrchr.c \
	ft_bzero.c \
	ft_strnstr.c \
	ft_strncmp.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_atoi.c \
	ft_memmove.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_tolower.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_itoa.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strmapi.c \
	ft_strtrim.c \
	ft_split.c

OBJS = $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar cr $@ $^

$(OBJS) : $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean $(OBJS)
	ar rc $(NAME) $(OBJS)
