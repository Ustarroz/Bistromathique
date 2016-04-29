/*
** my_strcnpy.c for Piscine_C_J06 in /home/puilla_e/Day6
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Mon Oct  5 10:18:03 2015 edouard puillandre
** Last update Sun Oct 18 17:33:00 2015 edouard puillandre
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != '\0' && i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  while (i < n)
    {
      dest[i] = '\0';
      i = i + 1;
    }
  return (dest);
}
