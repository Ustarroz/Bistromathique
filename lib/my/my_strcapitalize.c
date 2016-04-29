/*
** my_strcapitalize.c for Piscine_C_J06 in /home/puilla_e/Day6
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Tue Oct  6 10:27:03 2015 edouard puillandre
** Last update Sun Oct 18 21:10:07 2015 edouard puillandre
*/

int	my_change_word(char *str, int i, int cap_true)
{
  if (str[i] <= 122 && str[i] >= 97 && cap_true == 1)
    {
      str[i] = str[i] - 32;
      return (0);
    }
  else if (str[i] <= 90 && str[i] >= 65)
    {
      if (cap_true == 0)
	{
	  str[i] = str[i] + 32;
	  return (0);
	}
      else
	{
	  return (0);
	}
    }
  return (1);
}

char	*my_strcapitalize(char *str)
{
  int	i;
  int	cap_true;

  cap_true = 1;
  i = 0;
  while (str[i] != '\0')
    {
      if (my_change_word(str, i, cap_true) == 0)
	{
	  cap_true = 0;
	}
      else if (str[i] < 65 || str[i] > 90 && str[i] < 97 || str[i] > 122)
	{
	  cap_true = 1;
	}
      if (str[i] <= 57 && str[i] >= 48)
	{
	  cap_true = 0;
	}
      i = i + 1;
    }
  return (str);
}
