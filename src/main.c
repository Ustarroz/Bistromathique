/*
** main.c for bistromathique in /home/ustarr_r/rendu/Piscine_C_bistromathique/Final
**
** Made by Ustarroz Robin
** Login   <ustarr_r@epitech.net>
**
** Started on  Fri Oct 30 11:52:40 2015 Ustarroz Robin
** Last update Fri Apr 29 13:03:41 2016 voyevoda
*/

#include "../include/bistromathique.h"
#include "../include/my.h"
#include <stdlib.h>

int	check_size(char **av)
{
  if (my_str_isnum(av[3]) != 1)
    my_putstr_error(SYNTAXE_ERROR_MSG);
  return (0);
}

int	main(int ac, char **av)
{
  char *buff;
  t_nbr	res;

  if (ac != 4)
    {
      my_putstr("usage : ");
      my_putstr(av[0]);
      my_putstr("base ops\"()+-*/%\" exp_len\n");
      return (1);
    }
  check_size(av);
  buff = buffer(av[3]);
  global_error(av, buff);
  trad_base_to_ascii(av, buff);
  my_init_zero(&res);
  eval_expr(buff, &res, my_strlen(av[1]));
  trad_ascii_to_base(av, &res);
  free(res.str);
  free(buff);
  return (0);
}
