/*
** error2.c for error2 in /home/ustarr_r/rendu/Piscine_C_bistromathique/Robin
**
** Made by Ustarroz Robin
** Login   <ustarr_r@epitech.net>
**
** Started on  Tue Oct 27 14:17:00 2015 Ustarroz Robin
** Last update Fri Apr 29 13:01:37 2016 voyevoda
*/

#include "../include/bistromathique.h"

int     check_double(char *str_base)
{
  int   i;
  int   k;

  i = 0;
  k = 0;
  while (str_base[k] != '\0')
    {
      i = i + 1;
      if (str_base[i] == str_base[k])
	{
	  my_putstr_error(SYNTAXE_ERROR_MSG);
	}
      if (str_base[i] == '\0')
	{
          k = k + 1;
          i = k;
	}
    }
  return (0);
}

int	check_between(char *str_base, char *str_op)
{
  int	i;
  int	k;

  i = 0;
  k = 0;
  while (str_base[k] != '\0')
    {
      if (str_base[k] == str_op[i])
	{
	  my_putstr_error(SYNTAXE_ERROR_MSG);
 	}
      if (str_op[i] == '\0')
	{
	  k = k + 1;
	  i = 0;
	}
      i = i + 1;
    }
  return (0);
}

int	global_error(char **av, char *buffer)
{
  check_base(av);
  check_bracket(buffer);
  check_bracket2(buffer);
  check_op(buffer);
  check_op2(buffer);
  check_double(av[1]);
  check_double(av[2]);
  check_between(av[1], av[2]);
  return (0);
}
