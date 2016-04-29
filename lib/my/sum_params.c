/*
** sum_params.c for Piscine_C_J08 in /home/puilla_e/Day8
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Wed Oct  7 16:10:57 2015 edouard puillandre
** Last update Tue Oct 13 19:21:02 2015 edouard puillandre
*/

#include <stdlib.h>

char	*my_strcat(char *dest, char *src);

char	*sum_params(int argc, char **argv)
{
  int	i;
  char	*dest;
  int	dest_len;

  i = 0;
  while (i < argc)
    {
      dest_len = dest_len + my_strlen(argv[i]) + 1;
      i = i + 1;
    }
  dest = malloc(dest_len);
  dest = my_strcat(dest, argv[0]);
  i = 1;
  while (i < argc)
    {
      dest = my_strcat(dest, "\n");
      dest = my_strcat(dest, argv[i]);
      i = i + 1;
    }
  return (dest);
}
