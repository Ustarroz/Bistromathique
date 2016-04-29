/*
** my_strcmp.c for Piscine_C_J06 in /home/puilla_e/Day6
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Mon Oct  5 14:34:32 2015 edouard puillandre
** Last update Sun Oct 18 18:14:25 2015 edouard puillandre
*/

int	my_strcmp(char *str_one, char *str_two)
{
  int	i;

  i = 0;
  while (str_one[i] != '\0' && str_two[i] != '\0')
    {
      if (str_one[i] != str_two[i])
	{
	  return (str_one[i] - str_two[i]);
	}
      i = i + 1;
    }
  return (str_one[i] - str_two[i]);
}
