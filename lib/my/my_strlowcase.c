/*
** my_strlowcase.c for Piscine_C_J06 in /home/puilla_e/Day6
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Tue Oct  6 10:27:03 2015 edouard puillandre
** Last update Tue Oct 13 19:15:19 2015 edouard puillandre
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 90 && str[i] >= 65)
	{
	  str[i] = str[i] + 32;
	}
      i = i + 1;
    }
  return (str);
}
