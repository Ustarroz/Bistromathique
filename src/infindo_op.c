/*
** infindo_op.c for Piscine_C_bistromathique in /home/puilla_e/rendu/Piscine_C_bistromathique/Edouard/evalexpr
**
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
**
** Started on  Mon Oct 26 15:59:48 2015 edouard puillandre
** Last update Fri Apr 29 13:03:07 2016 voyevoda
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/bistromathique.h"

int	my_struct_cut(t_nbr *src, t_nbr *dest)
{
  int	i;

  dest->len = src->len;
  dest->neg = src->neg;
  dest->str = malloc(dest->len + 1);
  if (dest->str == NULL)
    {
      my_putstr_error(ERROR_MSG);
    }
  i = 0;
  while (i <= dest->len)
    {
      dest->str[i] = src->str[i];
      i = i + 1;
    }
  free(src->str);
  src->neg = 1;
  src->len = 0;
  return (0);
}

int	my_init_op(t_nbr *str, t_nbr *ptr, t_nbr *res, char c)
{
  if (c == '+')
    {
      my_init_sum(str, ptr, res);
    }
  else if (c == '*')
    {
      my_init_prod(str, ptr, res);
    }
  else if (c == '/')
    {
      my_init_div(str, ptr, res);
    }
  return (0);
}

int	infin_do_op(t_nbr *res, t_nbr *str, int len_base, char c)
{
  t_nbr	tmp;

  my_struct_cut(res, &tmp);
  my_sub_zero(&tmp);
  if (str->len == 1 && str->str[0] == '0' && (c == '%' || c == '/'))
    {
      my_putstr_error(ERROR_MSG);
    }
  my_init_op(&tmp, str, res, c);
  if (c == '+')
    infinadd(&tmp, str, res, len_base);
  else if (c == '*')
    infinmult(&tmp, str, res, len_base);
  else if (c == '/')
    {
      infindiv(&tmp, str, res, len_base);
    }
  else if (c == '%')
    {
      infinmodu(&tmp, str, res, len_base);
    }
  free(tmp.str);
  return (0);
}
