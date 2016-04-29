/*
** infinmult.c for Piscine_C_bistromathique in /home/puilla_e/Bistromathique/mult
**
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
**
** Started on  Tue Oct 20 15:48:17 2015 edouard puillandre
** Last update Fri Apr 29 13:03:31 2016 voyevoda
*/

#include "../include/bistromathique.h"
#include "../include/my.h"

int	my_sub_zero(t_nbr *res)
{
  int	i;
  int	nb_zero;

  nb_zero = 0;
  i = 0;
  while (res->str[i] == '0')
    {
      nb_zero = nb_zero + 1;
      i = i + 1;
    }
  i = 0;
  while (res->str[i + nb_zero - 1] != '\0' && nb_zero != 0)
    {
      res->str[i] = res->str[i + nb_zero];
      i = i + 1;
    }
  if (nb_zero == res->len)
    {
      res->str[0] = '0';
      res->str[1] = '\0';
    }
  res->len = my_strlen(res->str);
  return (0);
}

int	my_mult_op(t_nbr *str, t_nbr *ptr, t_nbr *res, int len_base)
{
  int	nb_one;
  int	nb_two;
  int	j;
  int	k;
  int	i;

  i = str->len - 1;
  while (i  >= 0)
    {
      j = ptr->len - 1;
      while (j >= 0)
	{
	  k = res->len - 1 - (str->len - 1 - i + ptr->len - 1 - j);
	  nb_one = res->str[k] + (str->str[i] - '0') * (ptr->str[j] - '0');
	  nb_two = res->str[k - 1] + nb_one / len_base;
	  res->str[k] = nb_one % len_base;
	  res->str[k - 1] = nb_two % len_base;
	  if (k >= 2)
	    res->str[k - 2] = res->str[k - 2] + nb_two / len_base;
	  j = j - 1;
	}
      i = i - 1;
    }
  return (0);
}

int	infinmult(t_nbr *str, t_nbr *ptr, t_nbr *res, int len_base)
{
  int	i;

  my_sub_zero(str);
  my_sub_zero(ptr);
  my_mult_op(str, ptr, res, len_base);
  i = 0;
  while (i < res->len)
    {
      res->str[i] = res->str[i] + '0';
      i = i + 1;
    }
  my_sub_zero(res);
  return (0);
}
