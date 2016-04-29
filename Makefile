##
## Makefile for Piscine_C_infinadd in /home/puilla_e/Day10/do-op
## 
## Made by edouard puillandre
## Login   <puilla_e@epitech.net>
## 
## Started on  Mon Oct 12 20:34:36 2015 edouard puillandre
## Last update Fri Apr 29 13:04:29 2016 voyevoda
##

CC	= cc

SRC	= src/base.c			\
	  src/buff.c			\
	  src/error2.c			\
	  src/error.c			\
	  src/my_putstr_error.c		\
	  src/eval_expr.c		\
	  src/infinmodu.c		\
	  src/infindiv.c		\
	  src/my_init.c			\
	  src/infinmult.c		\
	  src/infinadd.c		\
	  src/infindo_op.c		\
	  src/main.c

RM	= rm -f

NAM_LIB	= -lmy

DIR_LIB	= -L./lib/my/

NAME	= calc

CFLAGS	= -Werror -Wall -Wextra -ansi -pedantic

LDFLAGS = 

OBJ	= $(SRC:.c=.o)


$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(NAM_LIB) $(DIR_LIB) $(LDFLAGS)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
