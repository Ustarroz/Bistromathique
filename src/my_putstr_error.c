/*
** my_putstr_error.c for my_putstr_error.c in /home/ustarr_r/rendu/Piscine_C_bistromathique/Robin
** 
** Made by Ustarroz Robin
** Login   <ustarr_r@epitech.net>
** 
** Started on  Wed Oct 28 10:58:56 2015 Ustarroz Robin
** Last update Sat Oct 31 12:11:42 2015 edouard puillandre
*/

#include <stdlib.h>
#include <unistd.h>

void	my_putstr_error(char *str)
{
  while (*str != '\0')
    {
      write(2, str, 1);
      str = str + 1;
    }
  exit(2);
}
