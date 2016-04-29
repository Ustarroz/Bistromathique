/*
** error.c for error in /home/ustarr_r/rendu/Piscine_C_bistromathique/Robin
**
** Made by Ustarroz Robin
** Login   <ustarr_r@epitech.net>
**
** Started on  Mon Oct 26 15:10:11 2015 Ustarroz Robin
** Last update Fri Apr 29 13:01:49 2016 voyevoda
*/

#include "../include/bistromathique.h"
#include "../include/my.h"

int	check_base(char **av)
{
  if (my_strlen(av[1]) < 2)
    {
      my_putstr_error(ERROR_MSG);
    }
  if (my_strlen (av[2]) != 7)
    {
      my_putstr_error(ERROR_MSG);
    }
  return (0);
}

int	check_bracket(char *str_expr)
{
  int	k;
  int	i;

  k = 0;
  i = 0;
  while (str_expr[i] != '\0')
    {
      if (str_expr[i] == '(')
	{
	  k = k + 1;
	}
      if (str_expr[i] == ')')
	{
	  k = k - 1;
	}
      if (k < 0)
	my_putstr_error(SYNTAXE_ERROR_MSG);
      i = i + 1;
    }
  if (k != 0)
    {
      my_putstr_error(SYNTAXE_ERROR_MSG);
    }
  return (0);
}

int	check_op(char *str_expr)
{
  int	i;

  i = 0;
  if (str_expr[i] == '*' || str_expr[i] == '%' || str_expr[i] == '/')
    {
      my_putstr_error(SYNTAXE_ERROR_MSG);
    }
  while (str_expr[i] != '\0')
    {
      if (str_expr[i] == '(')
	{
	  if (str_expr[i + 1] == '*' || str_expr[i + 1] == '%'
	      || str_expr[i + 1] == '/')
	    {
	      my_putstr_error(SYNTAXE_ERROR_MSG);
	    }
	}
      i = i + 1;
    }
  return (0);
}

int	check_op2(char *str_expr)
{
  int	i;

  i = 0;
  while (str_expr[i] != '\0')
    {
      if (str_expr[i] == '*' || str_expr[i] == '%' || str_expr[i] == '/')
	{
	  i = i + 1;
	  if (str_expr[i] == '*' || str_expr[i] == '%' || str_expr[i] == 0
	      || str_expr[i] == '/' || str_expr[i] == ')')
	    {
	      my_putstr_error(SYNTAXE_ERROR_MSG);
	    }
	}
      i = i + 1;
    }
  if (str_expr[i - 1] == '+' || str_expr[i - 1] == '-')
    {
      my_putstr_error(SYNTAXE_ERROR_MSG);
    }
  return (0);
}

int	check_bracket2(char *str_expr)
{
  int	i;

  i = 0;
  while (str_expr[i] != '\0')
    {
      i = i + 1;
      if (str_expr[i] == '(')
	{
	  if (str_expr[i - 1] <= 57 && str_expr[i - 1] >= 48)
	    my_putstr_error(SYNTAXE_ERROR_MSG);
	}
      if (str_expr[i] == ')')
	{
	  if (str_expr[i + 1] <= 57 && str_expr[i + 1] >= 48)
	    my_putstr_error(SYNTAXE_ERROR_MSG);
	  if (str_expr[i - 1] == '+' || str_expr[i - 1] == '-')
	    my_putstr_error(SYNTAXE_ERROR_MSG);
	}
    }
  return (0);
}
