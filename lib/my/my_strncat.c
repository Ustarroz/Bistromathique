/*
** my_strncat.c for Piscine_C_J07 in /home/puilla_e/Day7
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Tue Oct  6 18:44:00 2015 edouard puillandre
** Last update Wed Oct  7 10:38:15 2015 edouard puillandre
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	k;

  i = 0;
  k = 0;
  while (dest[i] != '\0')
    {
      i = i + 1;
    }
  while (src[k] != '\0' && k < nb)
    {
      dest[i] = src[k];
      i = i + 1;
      k = k + 1;
    }
  dest[i] = '\0';
  return (dest);
}
