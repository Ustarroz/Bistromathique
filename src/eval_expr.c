/*
** eval_expr.c for Piscine_C_evalexpr in /home/lauque_m/rendu/Poubelle_test
**
** Made by maxence lauque
** Login   <lauque_m@epitech.net>
**
** Started on  Wed Oct 21 10:49:56 2015 maxence lauque
** Last update Fri Apr 29 13:01:59 2016 voyevoda
*/

#include <stdlib.h>
#include "../include/bistromathique.h"

int	bracket(char **str, t_nbr *num, int len_base)
{
  int	nb_bracket;
  char	*expr;
  int	neg;

  expr = *str + 1;
  nb_bracket = 1;
  while (nb_bracket > 0)
    {
      *str = *str + 1;
      if (**str == 40)
	{
	  nb_bracket = nb_bracket + 1;
	}
      else if (**str == 41)
	{
	  nb_bracket = nb_bracket - 1;
	}
    }
  **str = '\0';
  *str = *str + 1;
  neg = num->neg;
  my_init_zero(num);
  eval_expr(expr, num, len_base);
  num->neg = num->neg * neg;
  return (0);
}

int	my_getstr(char **str, t_nbr *num, int len_base)
{
  int	i;

  i = 0;
  while (str[0][i] >= 48 && str[0][i] <= 47 + len_base)
    {
      i = i + 1;
    }
  num->len = i;
  if ((num->str = malloc(num->len + 1)) == NULL)
    my_putstr_error(ERROR_MSG);
  i = 0;
  while (**str >= 48 && **str <= 47 + len_base)
    {
      num->str[i] = **str;
      *str = *str + 1;
      i = i + 1;
    }
  num->str[i] = 0;
  return (0);
}

int	number(char **str, t_nbr *num, int len_base)
{
  if (**str == 32 || **str == '+')
    {
      *str = *str + 1;
      number(str, num, len_base);
      return (0);
    }
  if (**str == 40)
    {
      bracket(str, num, len_base);
      return (0);
    }
  if (**str == '-')
    {
      *str = *str + 1;
      num->neg = num->neg * - 1;
      number(str, num, len_base);
      return (0);
    }
  my_getstr(str, num, len_base);
  return (0);
}

int	factors(char **str, t_nbr *fact, int len_base)
{
  t_nbr	num;
  char	c;

  number(str, fact, len_base);
  while (**str != '+' && **str != '-' && **str != '\0')
    {
      my_init_zero(&num);
      c = **str;
      *str = *str + 1;
      number(str, &num, len_base);
      infin_do_op(fact, &num, len_base, c);
      free(num.str);
    }
  return (0);
}

int	eval_expr(char *str, t_nbr *res, int len_base)
{
  t_nbr	fact;

  while (*str != '\0')
    {
      fact.neg = 1;
      factors(&str, &fact, len_base);
      infin_do_op(res, &fact, len_base, '+');
      free(fact.str);
    }
  return (0);
}
