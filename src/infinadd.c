/*
** infinadd.c for Piscine_C_infinadd in /home/puilla_e/Bistromathique
**
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
**
** Started on  Mon Oct 19 10:23:05 2015 edouard puillandre
** Last update Fri Apr 29 13:02:09 2016 voyevoda
*/

#include "../include/bistromathique.h"
#include "../include/my.h"

int	my_sub_digit(t_nbr *str, t_nbr *ptr, t_nbr *res, int i)
{
  int	j;
  int	nb;

  j = str->len - ptr->len;
  nb = res->str[i + 1];
  if (i - j >= 0)
    {
      nb = str->str[i] - ptr->str[i - j] - res->str[i + 1];
    }
  else if (i >= 0)
    {
      nb = str->str[i] - res->str[i + 1] - '0';
    }
  return (nb);
}

int	my_sub_inf(t_nbr *str, t_nbr *ptr, t_nbr *res, int len_base)
{
  int	i;
  int	nb;

  i = str->len - 1;
  while (i + 1 > 0)
    {
      if ((nb = my_sub_digit(str, ptr, res, i)) < 0)
	{
	  res->str[i + 1] = len_base + nb;
	  res->str[i] = 1;
	}
      else
	{
	  res->str[i + 1] = nb;
	}
      res->str[i + 1] = res->str[i + 1] + '0';
      i = i - 1;
    }
  res->str[0] = res->str[0] + '0';
  return (0);
}

int	my_sum_inf(t_nbr *str, t_nbr *ptr, t_nbr *res, int len_base)
{
  int	i;
  int	j;
  int	nb;

  i = str->len - 1;
  j = str->len - ptr->len;
  while (i + 1 > 0)
    {
      nb = res->str[i + 1];
      if (i - j >= 0)
	{
	  nb = res->str[i + 1] + str->str[i] + ptr->str[i - j] - 2 * '0';
	}
      else if (i >= 0)
	{
	  nb = res->str[i + 1] + str->str[i] - '0';
	}
      res->str[i + 1] = nb % len_base;
      res->str[i] = nb / len_base;
      res->str[i + 1] = res->str[i + 1] + '0';
      i = i - 1;
    }
  res->str[0] = res->str[0] + '0';
  return (0);
}

int	infinadd(t_nbr *str, t_nbr *ptr, t_nbr *res, int len_base)
{
  my_sub_zero(str);
  my_sub_zero(ptr);
  if (str->neg == res->neg && str->neg != ptr->neg)
    {
      my_sub_inf(str, ptr, res, len_base);
    }
  else if (ptr->neg == res->neg && str->neg != ptr->neg)
    {
      my_sub_inf(ptr, str, res, len_base);
    }
  else if ((my_strcmp(str->str, ptr->str) >= 0 &&
	    str->len == ptr->len) || str->len > ptr->len)
    {
      my_sum_inf(str, ptr, res, len_base);
    }
  else
    {
      my_sum_inf(ptr, str, res, len_base);
    }
  my_sub_zero(res);
  return (0);
}
