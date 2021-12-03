NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror  -include $(INCL)
AR = ar rcs

LIBFILES =\
ft_memset		ft_bzero		ft_memcmp		ft_memcpy	\
ft_memmove		ft_memchr		ft_strlen		ft_striteri	\
ft_strdup		ft_strcpy		ft_strcat		ft_strrchr	\
ft_strncat		ft_strlcat		ft_strchr		ft_strstr	\
ft_strnstr		ft_strcmp		ft_strncmp		ft_atoi		\
ft_isalpha		ft_isdigit		ft_isalnum		ft_ulltoa	\
ft_isprint		ft_toupper		ft_tolower		ft_strlcpy	\
ft_calloc		ft_isascii		ft_substr		ft_strjoin	\
ft_strtrim		ft_split		ft_itoa			ft_strmapi	\
ft_putchar_fd		ft_putstr_fd		ft_putendl_fd		ft_putnbr_fd

INCL = libft.h

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(LIBFILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(LIBFILES)))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<
	
$(NAME): $(OBJS) 
	$(AR) $@ $^
	@echo "$(NAME) : Tip Top"

all: $(NAME)

clean:
	rm -f $(OBJS)
	@echo "Clean !"

fclean: clean 
	rm -f $(NAME)

re: fclean all

so: 
	@gcc -nostartfiles -fPIC $(CFLAGS) $(LIBSRC) -I$(INCL)
	@gcc -nostartfiles -shared -o libft.so $(LIBOBJS) -I$(INCL)

.PHONY: all clean fclean re
