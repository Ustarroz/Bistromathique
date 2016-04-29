/*
** my_power_rec.c for Piscine_C_J05 in /home/puilla_e/Day5
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Sun Oct  4 09:52:17 2015 edouard puillandre
** Last update Sun Oct 18 16:12:19 2015 edouard puillandre
*/

int	my_power_rec(int nb, int power)
{
  if (power == 0)
    {
      return (1);
    }
  else if (power < 0)
    {
      return (0);
    }
  else
    {
      if (power > 1)
	{
	  nb = nb * my_power_rec(nb, power - 1);
	  return (nb);
	}
    }
}
