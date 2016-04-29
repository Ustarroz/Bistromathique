/*
** my_showstr.c for Piscine_C_J07 in /home/puilla_e/Day7/lib/my
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Tue Oct  6 18:25:11 2015 edouard puillandre
** Last update Mon Oct 19 08:15:41 2015 edouard puillandre
*/

int	my_hex_nbr(int nb)
{
  my_putchar(nb / 16 + 48);
  if (nb % 16 <= 9)
    {
      my_putchar(nb % 16 + 48);
    }
  else
    {
      my_putchar(nb % 16 + 87);
    }
  return (0);
}

int	my_showstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] == 127)
	{
	  my_putchar(92);
	  my_hex_nbr(str[i]);
	}
      else
	{
	  my_putchar(str[i]);
	}
      i = i + 1;
    }
  return (0);
}
