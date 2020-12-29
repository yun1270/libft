CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
TARGET = libft.a
FILES = ft_memset.c	ft_strrchr.c ft_bzero.c	ft_strnstr.c ft_strncmp.c ft_memcpy.c ft_memccpy.c ft_atoi.c ft_memmove.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcmp.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_strlcpy.c ft_isprint.c ft_toupper.c ft_strlcat.c ft_strchr.c	ft_tolower.c ft_calloc.c ft_strdup.c


OBJS = $(FILES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	ar cr $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@ -include libft.h

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)
