/*
** my_strstr.c for Piscine_C_J06 in /home/puilla_e/Day6
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Mon Oct  5 14:34:32 2015 edouard puillandre
** Last update Tue Oct 13 19:18:15 2015 edouard puillandre
*/

int	my_checkstr(char *str, char *to_find, int beg_to)
{
  int	k;
  int	i;

  k = 0;
  i = beg_to;
  while (to_find[k] != '\0')
    {
      if (str[i] == to_find[k])
	{
	  i = i + 1;
	  k = k + 1;
	}
      else
	{
	  return (0);
	}
    }
  return (1);
}

char	*my_substr(char *str, int beg_str)
{
  int	i;

  i = 0;
  while (str[i + beg_str] != '\0')
    {
      str[i] = str[i + beg_str];
      i = i + 1;
    }
  str[i] = str[i + beg_str];
}

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	beg_str;

  i = 0;
  beg_str = - 1;
  while (str[i] != '\0' && beg_str == - 1)
    {
      if (str[i] == to_find[0] && my_checkstr(str, to_find, i) == 1)
	{
	  beg_str = i;
	}
      else
	{
	  i = i + 1;
	}
    }
  if (beg_str != - 1)
    {
      my_substr(str, beg_str);
    }
  else
    {
      str[0] = '\0';
    }
  return (str);
}
