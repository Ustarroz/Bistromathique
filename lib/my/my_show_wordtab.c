/*
** my_show_wordtab.c for Piscine_C_J08 in /home/puilla_e/Day8
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Wed Oct  7 19:22:58 2015 edouard puillandre
** Last update Thu Oct  8 21:46:10 2015 edouard puillandre
*/

int	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != 0)
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i = i + 1;
    }
  return (0);
}
