/*
** my_find_prime_sup.c for Piscine_C_J05 in /home/puilla_e/Day5
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Sun Oct  4 11:22:07 2015 edouard puillandre
** Last update Sun Oct 18 16:34:20 2015 edouard puillandre
*/

int	my_find_prime_sup(int nb)
{
  if (nb <= 2)
    {
      return (2);
    }
  else
    {
      while (my_is_prime(nb) != 1)
	{
	  nb = nb + 1;
	}
      return (nb);
    }
}
