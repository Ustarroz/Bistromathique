/*
** my_strncmp.c for Piscine_C_J06 in /home/puilla_e/Day6
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Mon Oct  5 14:34:32 2015 edouard puillandre
** Last update Sun Oct 18 18:50:26 2015 edouard puillandre
*/

int	my_strncmp(char *str_one, char *str_two, int n)
{
  int	i;

  if (n > 0)
    {
      i = 0;
      while (str_one[i] != '\0' && str_two[i] != '\0' && i < n - 1)
	{
	  if (str_one[i] != str_two[i])
	    {
	      return (str_one[i] - str_two[i]);
	    }
	  i = i + 1;
	}
      return (str_one[i] - str_two[i]);
    }
}
