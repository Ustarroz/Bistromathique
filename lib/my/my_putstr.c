/*
** my_putstr.c for Piscine_C_J04 in /home/puilla_e/Day4
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Thu Oct  1 21:13:34 2015 edouard puillandre
** Last update Tue Oct  6 18:07:33 2015 edouard puillandre
*/

int	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
  return (0);
}
