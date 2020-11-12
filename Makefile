NAME = libasm.a
HEAD = libasm.h

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s
SRCO = ft_strlen.o ft_strcpy.o ft_strcmp.o ft_write.o ft_read.o ft_strdup.o

all: $(NAME) 

$(NAME): $(SRCO) $(HEAD)
	ar rc $(NAME) $(SRCO)

$(SRCO): %.o:%.s
	nasm -f macho64 $< -o $@

test: all
	gcc -L. -lasm main.c

clean:
	/bin/rm -f $(SRCO)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
.PHONY: clean fclean re all