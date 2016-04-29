/*
** my_strupcase.c for Piscine_C_J06 in /home/puilla_e/Day6
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Tue Oct  6 10:27:03 2015 edouard puillandre
** Last update Tue Oct 13 19:20:10 2015 edouard puillandre
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 122 && str[i] >= 97)
	{
	  str[i] = str[i] - 32;
	}
      i = i + 1;
    }
  return (str);
}
