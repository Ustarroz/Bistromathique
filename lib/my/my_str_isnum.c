/*
** my_str_isnum.c for Piscine_C_J06 in /home/puilla_e/Day6
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Tue Oct  6 10:27:03 2015 edouard puillandre
** Last update Tue Oct 13 19:12:55 2015 edouard puillandre
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 48 || str[i] > 57)
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}
