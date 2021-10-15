LIBSRC = ./src/memset.c ./src/bzero.c ./src/memcmp.c ./src/memcpy.c \
./src/memccpy.c ./src/memmove.c ./src/memchr.c ./src/strlen.c \
./src/strdup.c ./src/strcpy.c ./src/strncpy.c ./src/strcat.c \
./src/strncat.c ./src/strlcat.c ./src/strnew.c ./src/strchr.c \
./src/strrchr.c ./src/strstr.c ./src/strnstr.c ./src/strcmp.c \
./src/strncmp.c ./src/atoi.c ./src/isspace.c ./src/isalpha.c \
./src/isdigit.c ./src/isalnum.c ./src/isprint.c ./src/toupper.c \
./src/tolower.c ./src/strlcpy.c ./src/calloc.c ./src/split.c \
./src/split.c ./src/itoa.c ./src/putchar_fd.c ./src/putstr_fd.c \
./src/putendl_fd.c ./src/putnbr_fd.c

LIBOBJS = ${LIBSRC:.c=.o} 
INCL = ./inc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
OUT = ./libft.a
.c.o :
	@echo "Compiling $<"
	@gcc -c $(CFLAGS) $< -o ${<:.c=.o} -I$(INCL)
	
lib : $(LIBOBJS) 
	@echo "Making $(NAME)"
	@ar rcs $(OUT) $(LIBOBJS)
	@echo "$(NAME) : ok"

all: lib 

clean:
	@echo "Removing objects files"
	@rm $(LIBOBJS)
fclean: clean
	@echo "Removing ftlib"
	@rm ./libft.a

re: fclean all

so: 
	make
	gcc -nostartfiles -fPIC $(CFLAGS) $(LIBSRC) -I$(INCL)
	gcc -nostartfiles -shared -o libft.so $(LIBOBJS) -I$(INCL)

list:
	ar -t $(NAME)
.PHONY: so
