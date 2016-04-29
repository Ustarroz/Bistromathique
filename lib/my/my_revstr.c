/*
** my_revstr.c for Piscine_C_J06 in /home/puilla_e/Day6
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Mon Oct  5 12:26:56 2015 edouard puillandre
** Last update Tue Oct 13 19:03:04 2015 edouard puillandre
*/

char	*my_revstr(char *str)
{
  int	i;
  int	ln_str;
  int	var_one;

  i = 0;
  ln_str = 0;
  while (str[ln_str] != '\0')
    {
      ln_str = ln_str + 1;
    }
  ln_str = ln_str - 1;
  while (i < ln_str / 2)
    {
      var_one = str[i];
      str[i] = str[ln_str - i];
      str[ln_str - i] = var_one;
      i = i + 1;
    }
  return (str);
}
