/*
** my_strdup.c for Piscine_C_J08 in /home/puilla_e/Day8
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Wed Oct  7 14:03:33 2015 edouard puillandre
** Last update Thu Oct  8 16:19:01 2015 edouard puillandre
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  int	length;
  char	*dest;
  int	i;

  length = my_strlen(src) + 1;
  dest = malloc(length);
  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
