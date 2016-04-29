/*
** my_swap.c for Piscine_C_J04 in /home/puilla_e/Day4
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Thu Oct  1 16:43:38 2015 edouard puillandre
** Last update Tue Oct  6 18:06:45 2015 edouard puillandre
*/

int	my_swap(int *a, int *b)
{
  int	var_swap;

  var_swap = *a;
  *a = *b;
  *b = var_swap;
  return (0);
}
