/*
** my_strcpy.c for Piscine_C_J06 in /home/puilla_e/Day6
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Mon Oct  5 10:18:03 2015 edouard puillandre
** Last update Sun Oct 18 16:43:22 2015 edouard puillandre
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  while (dest[i] != '\0')
    {
      dest[i] = '\0';
      i = i + 1;
    }
  return (dest);
}
