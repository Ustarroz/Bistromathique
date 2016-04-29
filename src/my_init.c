/*
** init.c for Piscine_C_bistromathique in /home/puilla_e/rendu/Piscine_C_bistromathique/Edouard/evalexpr
**
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
**
** Started on  Mon Oct 26 15:59:48 2015 edouard puillandre
** Last update Fri Apr 29 13:03:53 2016 voyevoda
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/bistromathique.h"

int	my_init_sum(t_nbr *str, t_nbr *ptr, t_nbr *res)
{
  int	i;

  if (my_strcmp(str->str, ptr->str) == 0 && str->neg != ptr->neg)
    res->neg = 1;
  else if ((my_strcmp(str->str, ptr->str) > 0 &&
	    str->len == ptr->len) || str->len > ptr->len)
    res->neg = str->neg;
  else
    res->neg = ptr->neg;
  if (str->len > ptr->len)
    res->len = str->len + 1;
  else
    res->len = ptr->len + 1;
  if ((res->str = malloc(res->len + 1)) == NULL)
    {
      my_putstr_error(ERROR_MSG);
    }
  i = 0;
  while (i <= res->len)
    {
      res->str[i] = 0;
      i = i + 1;
    }
  return (0);
}

int	my_init_prod(t_nbr *str, t_nbr *ptr, t_nbr *res)
{
  int	i;

  if (str->neg == ptr->neg)
    {
      res->neg = 1;
    }
  else
    {
      res->neg = - 1;
    }
  res->len = str->len + ptr->len;
  if ((res->str = malloc(res->len + 1)) == NULL)
    {
      my_putstr_error(ERROR_MSG);
    }
  i = 0;
  while (i <= res->len)
    {
      res->str[i] = 0;
      i = i + 1;
    }
  return (0);
}

int	my_init_div(t_nbr *str, t_nbr *ptr, t_nbr *res)
{
  int	i;

  if (str->neg == ptr->neg)
    res->neg = 1;
  else
    res->neg = - 1;
  my_sub_zero(str);
  res->len = str->len - ptr->len + 1;
  if (res->len <= 0)
    res->len = 1;
  if ((res->str = malloc(res->len + 1)) == NULL)
    my_putstr_error(ERROR_MSG);
  i = 0;
  while (i < res->len)
    {
      res->str[i] = '0';
      i = i + 1;
    }
  res->str[i] = 0;
  res->str[0] = '1';
  return (0);
}

int	my_init_zero(t_nbr *str)
{
  str->len = 1;
  str->neg = 1;
  str->str = malloc(2);
  if (str->str == NULL)
    {
      my_putstr_error(ERROR_MSG);
    }
  str->str[0] = '0';
  str->str[1] = '\0';
  return (0);
}
