/*
** my_str_to_wordtab.c for Piscine_C_J08 in /home/puilla_e/Day8
** 
** Made by edouard puillandre
** Login   <puilla_e@epitech.net>
** 
** Started on  Wed Oct  7 21:25:51 2015 edouard puillandre
** Last update Wed Oct 14 18:10:35 2015 edouard puillandre
*/

#include <stdlib.h>
char	*my_strdup(char *src);

int	my_count_word(char *str)
{
  int	i;
  int	word_true;
  int	count_word;

  i = 0;
  word_true = 0;
  count_word = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 48 || str[i] > 57 && str[i] < 65
	  || str[i] > 90 && str[i] < 97 || str[i] > 122)
	{
	  word_true = 0;
	}
      else if (word_true == 0)
	{
	  word_true = 1;
	  count_word = count_word + 1;
	}
      i = i + 1;
    }
  return (count_word);
}

char	*my_cat_word(char *str, char *ptr, int pos_str)
{
  int	i;
  int	print_true;

  i = pos_str;
  print_true = 1;
  while (print_true == 1)
    {
      if (str[i] < 48 || str[i] > 57 && str[i] < 65
	  || str[i] > 90 && str[i] < 97 || str[i] > 122)
      	{
	  print_true = 0;
	  ptr[i] = '\0';
	}
      else
	{
	  i = i + 1;
	}
    }
  return (ptr + pos_str);
}

char	**my_seek_word(char *str, char **tab)
{
  int	i;
  int	word_true;
  int	k;
  char	*ptr;

  i = 0;
  word_true = 0;
  k = 0;
  ptr = my_strdup(str);
  while (str[i] != '\0')
    {
      if (str[i] < 48 || str[i] > 57 && str[i] < 65
	  || str[i] > 90 && str[i] < 97 || str[i] > 122)
	{
	  word_true = 0;
	}
      else if (word_true == 0)
	{
	  tab[k] = my_strdup(my_cat_word(str, ptr, i));
	  k = k + 1;
	  word_true = 1;
	}
      i = i + 1;
    }
  return (tab);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	nb_word;

  nb_word = my_count_word(str);
  tab = malloc(nb_word + 1);
  tab = my_seek_word(str, tab);
  tab[nb_word] = 0;
  return (tab);
}
