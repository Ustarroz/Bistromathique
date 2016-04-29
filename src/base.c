/*
** base.c for base.c in /home/ustarr_r/rendu/Piscine_C_bistromathique/Robin
**
** Made by Ustarroz Robin
** Login   <ustarr_r@epitech.net>
**
** Started on  Wed Oct 28 20:45:15 2015 Ustarroz Robin
** Last update Fri Apr 29 13:01:11 2016 voyevoda
*/

#include "../include/bistromathique.h"
#include "../include/my.h"

int	trad_digit(char *buffer, int *i, int *j, int *nb_true)
{
  buffer[*j] = *i + 48;
  *j = *j + 1;
  *i = - 1;
  *nb_true = 1;
  return (0);
}

int	trad_op(char *buffer, int *i, int *j)
{
  buffer[*j] = OP_STANDARD[*i];
  *j = *j + 1;
  *i = - 1;
  return (0);
}

int	trad_base_to_ascii(char  **av, char *buffer)
{
  int	i;
  int	j;
  int	nb_true;

  i = 0;
  j = 0;
  nb_true = 0;
  while (buffer[j] != '\0')
    {
      if (buffer[j] == av[1][i] && i < my_strlen(av[1]))
	{
	  trad_digit(buffer, &i, &j, &nb_true);
	}
      if (buffer[j] == av[2][i] && i < my_strlen(av[2]))
	{
	  trad_op(buffer, &i, &j);
	}
      if (i >= my_strlen(av[1]) && i > my_strlen(av[2]))
	my_putstr_error(SYNTAXE_ERROR_MSG);
      i = i + 1;
    }
  if (nb_true == 0)
    my_putstr_error(SYNTAXE_ERROR_MSG);
  return (0);
}

int	trad_ascii_to_base(char **av, t_nbr *res)
{
  int	i;

  i = 0;
  while(res->str[i] != '\0')
    {
      res->str[i] = av[1][res->str[i] - 48];
      i = i + 1;
    }
  if (res->neg == - 1)
    my_putchar(av[2][3]);
  my_putstr(res->str);
  return (0);
}
