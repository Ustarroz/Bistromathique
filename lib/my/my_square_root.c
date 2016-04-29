/*
** my_square_root.c for Piscine_C_J05 in /home/puilla_e/Day5
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Sun Oct  4 10:38:18 2015 edouard puillandre
** Last update Tue Oct 13 19:05:31 2015 edouard puillandre
*/

int	my_square_root(int nb)
{
  int var_root;

  var_root = 1;
  if (nb <= 0)
    {
      return (0);
    }
  else
    {
      while (nb / var_root > var_root)
	{
	  var_root = var_root + 1;
	}
      if (nb / var_root < var_root)
	{
	  return (0);
	}
    }
  return (var_root);
}
