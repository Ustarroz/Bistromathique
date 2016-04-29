/*
** my_str_isprintable.c for Piscine_C_J06 in /home/puilla_e/Day6
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Tue Oct  6 10:27:03 2015 edouard puillandre
** Last update Sun Oct 18 21:19:19 2015 edouard puillandre
*/

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] == 127)
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}
