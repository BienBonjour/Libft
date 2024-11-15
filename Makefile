NAME = libft.a

SRC_DIR = srcs
INCLUDES_DIR = include

MY_SOURCES = ft_isalpha.c       \
             ft_isdigit.c       \
             ft_isalnum.c       \
             ft_isascii.c       \
             ft_isprint.c       \
             ft_strlen.c        \
             ft_memset.c        \
             ft_bzero.c         \
             ft_memcpy.c        \
             ft_memmove.c       \
             ft_strlcpy.c       \
             ft_strlcat.c       \
             ft_toupper.c       \
             ft_tolower.c       \
             ft_strchr.c        \
             ft_strrchr.c       \
             ft_strncmp.c       \
             ft_memchr.c        \
             ft_memcmp.c        \
             ft_strnstr.c       \
             ft_atoi.c          \
             ft_calloc.c        \
             ft_strdup.c        \
             ft_substr.c        \
             ft_strjoin.c       \
             ft_strtrim.c       \
             ft_split.c         \
             ft_itoa.c          \
             ft_strmapi.c       \
             ft_striteri.c      \
             ft_putchar_fd.c    \
             ft_putstr_fd.c     \
             ft_putendl_fd.c    \
             ft_putnbr_fd.c

SRC = $(addprefix $(SRC_DIR)/, $(MY_SOURCES))
MY_OBJECTS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES_DIR)

all:	$(NAME)

$(NAME):	$(MY_OBJECTS)
	ar rc $(NAME) $(MY_OBJECTS)	
	ranlib $(NAME)

%.o:	$(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(MY_OBJECTS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
