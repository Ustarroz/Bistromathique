##
## Makefile for Piscine_C_J10 in /home/puilla_e/Day10
## 
## Made by edouard puillandre
## Login   <puilla_e@epitech.net>
## 
## Started on  Fri Oct  9 18:22:18 2015 edouard puillandre
## Last update Wed Oct 14 14:45:06 2015 edouard puillandre
##

RM		= rm -f

AR		= ar rc

CP		= cp

SRC		= my_putchar.c \
		  my_isneg.c \
		  my_put_nbr.c \
		  my_swap.c \
		  my_putstr.c \
		  my_strlen.c \
		  my_getnbr.c \
		  my_sort_int_tab.c \
		  my_power_rec.c \
		  my_square_root.c \
		  my_is_prime.c \
		  my_find_prime_sup.c \
		  my_strcpy.c \
		  my_strncpy.c \
		  my_revstr.c \
		  my_strstr.c \
		  my_strcmp.c \
		  my_strncmp.c \
		  my_strupcase.c \
		  my_strlowcase.c \
		  my_strcapitalize.c \
		  my_str_isalpha.c \
		  my_str_isnum.c \
		  my_str_islower.c \
		  my_str_isupper.c \
		  my_str_isprintable.c \
		  my_showstr.c \
		  my_showmem.c \
		  my_strcat.c \
		  my_strncat.c \
		  my_strdup.c \
		  sum_params.c \
		  my_show_wordtab.c \
		  my_str_to_wordtab.c

NAME		= libmy.a

OBJ		= $(SRC:.c=.o)

LIB_DIR		= ../

MY_DIR		= ../../include

MY_HEADER	= my.h


$(NAME):	$(OBJ)
	$(AR) $(NAME) $(OBJ)

all: $(NAME) copy_lib copy_my

copy_lib:
	$(CP) $(NAME) $(LIB_DIR)

copy_my:
	$(CP) $(MY_HEADER) $(MY_DIR)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
