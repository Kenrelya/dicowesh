/*
** fonctions.c for  in /home/senhaj_s/piscine/dicowesh
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Thu Nov  5 15:11:24 2015 SENHAJI Sophia
** Last update Fri Nov  6 22:36:38 2015 SENHAJI Sophia
*/

#include "fonctions.h"
#include "my_dico.h"
#include <stdlib.h>

t_word	*init(t_word *list)
{
  list->wesh = "boloss";
  list->french = "imbécile";
  list->next = NULL;
  return (list);
}

int		my_list_size(t_word **begin)
{
  int		count;
  t_word	**tmp;

  tmp = malloc(sizeof(t_word*));
  *tmp = *begin;
  count = 0;
  while (*begin != NULL)
    {
      count++;
      *begin = (*begin)->next;
    }
  *begin = *tmp;
  free(tmp);
  return (count);
}

void	french_to_wesh(t_word **dico, char *str, int (*cmp)())
{
  int	i;

  i = 0;
  while (*dico != NULL)
    {
      if ((*cmp)((*dico)->french, str) == 0)
	{
	  my_putstr("La traduction est :\n");
	  my_putstr((*dico)->wesh);
	  i++;
	}
      *dico = (*dico)->next;
    }
  if (i == 0)
    my_putstr("Ce mot n'est pas présent dans le dictionnaire");
}

void	wesh_to_french(t_word **dico, char *str, int (*cmp)())
{
  int	i;

  i = 0;
  while (*dico != NULL)
    {
      if ((*cmp)((*dico)->wesh, str) == 0)
	{
	  my_putstr("La traduction est : \n");
	  my_putstr((*dico)->french);
	  i++;
	}
      *dico = (*dico)->next;
    }
  if (i == 0)
    my_putstr("Ce mot n'est pas présent dans le dictionnaire");
}
#include <stdio.h>
void		my_sort_wesh(t_word **dico, int (*cmp)())
{
  t_word	*prev;
  t_word	**debut;
  int		i;

  prev = NULL;
  debut = malloc(sizeof(t_word*));
  *debut = *dico;
    for (i = my_list_size(dico); i > 0; i--)
    {
      tri(dico, debut, prev, cmp);
      prev = NULL;
      *dico = *debut;
    }
    //free(suivant);
  //free(prev);
  //free(debut);
}
