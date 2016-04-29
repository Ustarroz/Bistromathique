/*
** my_is_prime.c for Piscine_C_J05 in /home/puilla_e/Day5
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Sun Oct  4 11:22:07 2015 edouard puillandre
** Last update Wed Oct 14 19:09:56 2015 edouard puillandre
*/

int	my_square_rootbis(int nb)
{
  int	var_root;

  var_root = 1;
  if (nb < 0)
    {
      return (0);
    }
  else
    {
      while (nb / var_root > var_root)
	{
	  var_root = var_root + 1;
	}
    }
  return (var_root);
}

int	my_is_prime(int nb)
{
  int	var_one;
  int	square_nb;

  if ((nb % 2 == 0 || nb <= 1) && nb != 2)
    {
      return (0);
    }
  else if (nb == 2)
    {
      return (1);
    }
  var_one = 3;
  square_nb = my_square_rootbis(nb);
  while (var_one <= square_nb)
    {
      if (nb % var_one == 0)
	{
	  return (0);
	}
      var_one = var_one + 1;
    }
  return (1);
}
