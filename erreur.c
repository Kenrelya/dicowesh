/*
** erreur.c for  in /home/senhaj_s/piscine/dicowesh
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Fri Nov  6 17:09:18 2015 SENHAJI Sophia
** Last update Fri Nov  6 22:37:47 2015 SENHAJI Sophia
*/

#include "fonctions.h"
#include "my_dico.h"
#include <stdlib.h>

int	isalphanum(char *str)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= '0' && str[i] <= '9') ||
	  (str[i] >= 'a' && str[i] <= 'z') ||
	  (str[i] >= 'A' && str[i] <= 'Z'))
	count += 0;
      else 
	count++;
      i++;
    }
  return (count);
}

void		tri(t_word **dico,  t_word **debut, t_word *prev, int (*cmp)())
{
  t_word	*suivant;

  suivant = malloc(sizeof(t_word));
  while (*dico != NULL)
    {
      suivant = (*dico)->next;
      if ((*dico)->next != NULL)
	if (cmp((*dico)->wesh, (*dico)->next->wesh) != -1)
	  {
	    if (prev == NULL)
	      *debut = suivant;
	    else
	      prev->next = suivant;
	    (*dico)->next = suivant->next;
	    suivant->next = *dico;
	    //free(prev);                                                              
	  }
      prev = malloc(sizeof(t_word));
      prev = *dico;
      *dico = (*dico)->next;
    }

}
/*void	clean_dico(t_word *dico)
**{
**}
*/
