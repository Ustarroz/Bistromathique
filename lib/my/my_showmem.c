/*
** my_showmem.c for Piscine_C_J07 in /home/puilla_e/Day7/lib/my
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Tue Oct  6 18:28:17 2015 edouard puillandre
** Last update Mon Oct 19 08:31:09 2015 edouard puillandre
*/

int	my_conv_hex(int nb)
{
  if (nb >= 16)
    {
      my_conv_hex(nb / 16);
    }
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

int	my_showmem(char *str, int size)
{
  return (0);
}
