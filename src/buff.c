/*
** buff.c for buff.C in /home/ustarr_r/rendu/Piscine_C_bistromathique/Robin
**
** Made by Ustarroz Robin
** Login   <ustarr_r@epitech.net>
**
** Started on  Wed Oct 28 17:58:21 2015 Ustarroz Robin
** Last update Fri Apr 29 13:01:24 2016 voyevoda
*/

#include "../include/bistromathique.h"
#include "../include/my.h"
#include <stdlib.h>
#include <unistd.h>

char	*buffer(char *str_size)
{
  int	ret;
  int	size;
  char	*buff;

  size = my_getnbr(str_size);
  buff = malloc(size + 1);
  if (buff == NULL)
    {
      my_putstr_error(ERROR_MSG);
    }
  ret = read (0, buff, size);
  if (ret != size)
    {
      my_putstr_error(ERROR_MSG);
    }
  buff[size] = '\0';
  return (buff);
}
