/*
** infinmodu.c for infinmodu in /home/BOURRE_A/Semestre_1/Rendu/Piscine_C/Piscine_C_J/Piscine_C_bistromathique/Quentin/modulo
**
** Made by Quentin BOURREAU
** Login   <BOURRE_A@epitech.net>
**
** Started on  Wed Oct 28 18:02:24 2015 Quentin BOURREAU
** Last update Fri Apr 29 13:03:20 2016 voyevoda
*/

#include <stdlib.h>
#include "../include/bistromathique.h"
#include "../include/my.h"

int	infinmodu(t_nbr *str, t_nbr *ptr, t_nbr *res, int len_base)
{
  t_nbr	i;
  t_nbr	j;

  my_init_div(str, ptr, &i);
  infindiv(str, ptr, &i, len_base);
  my_init_prod(&i, ptr, &j);
  infinmult(&i, ptr, &j, len_base);
  j.neg = j.neg * - 1;
  my_init_sum(str, &j, res);
  infinadd(str, &j , res, len_base);
  free(j.str);
  free(i.str);
  return (0);
}
