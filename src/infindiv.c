/*
** divinf.c for divinf in /home/BOURRE_A/Semestre_1/Rendu/Piscine_C/Piscine_C_J/Piscine_C_bistromathique/Quentin
**
** Made by Quentin BOURREAU
** Login   <BOURRE_A@epitech.net>
**
** Started on  Mon Oct 26 15:57:29 2015 Quentin BOURREAU
** Last update Fri Apr 29 13:02:22 2016 voyevoda
*/

#include <stdlib.h>
#include "../include/bistromathique.h"
#include "../include/my.h"

int	if_one(t_nbr *tmp, t_nbr *res, t_nbr *i, t_nbr *str)
{
  int	k;
  int	len_base;
  int	sgn_res;

  k = str->len - i->len + 1;
  len_base = i->str[0];
  sgn_res = i->str[1] - 48;
  i->str[0] = '0';
  i->str[1] = '1';
  if (((str->str[k] - 48 - (len_base + 1) / 2) * i->neg * sgn_res <= 0
       && i->len != 1) || (i->len == 1 && i->neg == sgn_res))
    {
      my_struct_cut(tmp, res);
    }
  else
    {
      free(tmp->str);
      i->neg = i->neg * - 1 ;
    }
  return (0);
}

int	if_two(t_nbr *res, t_nbr *i, t_nbr *max, t_nbr *tmp)
{
  free(tmp->str);
  free(max->str);
  my_struct_cut(res, i);
  return (0);
}

int	addition(t_nbr *res, t_nbr *tmp, t_nbr *i, int len_base)
{
  my_struct_cut(res, tmp);
  my_init_sum(tmp, i, res);
  infinadd(tmp, i, res, len_base);
  return (0);
}

int	compare(t_nbr *str, t_nbr *max, t_nbr *i, int sgn_res)
{
  if ((my_strcmp(str->str, max->str) < 0 && max->len == str->len)
      || max->len > str->len)
    {
      if (i->neg == sgn_res)
	return (1);
      else
	return (- 1);
    }
  else if ((my_strcmp(str->str, max->str) > 0 && max->len == str->len)
	   || max->len < str->len)
    {
      if (i->neg == sgn_res)
	return (- 1);
      else
	return (1);
    }
  else if (my_strcmp(str->str, max->str) == 0)
    {
      return (0);
    }
  return (0);
}

int	infindiv(t_nbr *str, t_nbr *ptr, t_nbr *i, int len_base)
{
  t_nbr	res;
  t_nbr	max;
  t_nbr	tmp;
  int	sgn_res;

  my_init_zero(&res);
  sgn_res = i->neg;
  while(i->len != 1 || i->str[0] != '0')
    {
      addition(&res, &tmp, i, len_base);
      my_init_prod(&res, ptr, &max);
      infinmult(&res, ptr, &max, len_base);
      if (compare(str, &max, i, sgn_res) == 1)
	{
	  i->str[0] = len_base;
	  i->str[1] = 48 + sgn_res;
	  if_one(&tmp, &res, i, str);
	}
      else if (compare(str, &max, i, sgn_res) == - 1)
	free(tmp.str);
      else
	return (if_two(&res, i, &max, &tmp));
      free(max.str);
    }
  return (my_struct_cut(&res, i));
}
