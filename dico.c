/*
** dico.c for  in /home/senhaj_s/piscine/dicowesh
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Thu Nov  5 09:59:57 2015 SENHAJI Sophia
** Last update Fri Nov  6 22:19:25 2015 SENHAJI Sophia
*/

#include "my_dico.h"
#include "fonctions.h"
#include <stdlib.h>

void		add_word(t_word **dico)
{
  t_word	**tmp;
  t_word	*elem;
  char		*input;
  char		*input2;

  my_putstr("Ajoute le mot en français puis sa définition wesh\n");
  input = readLine();
  input2 = readLine();
  while (isalphanum(input) != 0 || isalphanum(input2) != 0)
    {
      my_putstr("Vous n'avez pas entré un mot..\n");
      input = readLine();
      input2 = readLine();
    }
  elem = malloc(sizeof(t_word));
  tmp = malloc(sizeof(t_word*));
  *tmp = *dico;
  while ((*dico)->next != NULL)
    *dico = (*dico)->next;
  (*dico)->next = elem;
  elem->french = input;
  elem->wesh = input2;
  *dico = *tmp;
  my_putstr("Le mot a été ajouté\n");
  //free(tmp);
}

void		show_weshdico(t_word **dico)
{
  t_word	**tmp;

  tmp = malloc(sizeof(t_word*));
  my_sort_wesh(dico, my_strcmp);
  *tmp = *dico;
  while (*dico != NULL)
    {
      my_putstr((*dico)->wesh);
      my_putchar('\n');
      *dico = (*dico)->next;
    }
  *dico = *tmp;
  free(tmp);
}

void		show_frenchdico(t_word **dico)
{
  t_word	**tmp;

  tmp = malloc(sizeof(t_word*));
  *tmp = *dico;
  //my_sort_french(&dico, my_strcmp);
  while (*dico != NULL)
    {
      my_putstr((*dico)->french);
      my_putchar('\n');
      *dico = (*dico)->next;
    }
  *dico = *tmp;
  free(tmp);
}

void		choice(char *str, t_word **dico)
{
  char		*input;
 
  if (my_strcmp(str, "1") == 0)
    {
      my_putstr("Voila le dico wesh gros :\n");
      show_weshdico(dico);
    }
  else if (my_strcmp(str, "2") == 0)
    {
      my_putstr("Voici le dico cher monsieur :\n");
      show_frenchdico(dico);
    }
  else if (my_strcmp(str, "3") == 0)
    add_word(dico);
    else if (my_strcmp(str, "4") == 0)
    {
      my_putstr("Entrez le mot français à traduire :\n");
      input = readLine();
      french_to_wesh(dico, input, my_strcmp);
    }
  else
    {
      my_putstr("Entrez le mot wesh à traduire :\n");
      input = readLine();
      wesh_to_french(dico, input, my_strcmp);
    }
}

void		menu()
{
  char		*input;
  t_word	**dico;
  
  dico = malloc(sizeof(t_word*));
  *dico = malloc(sizeof(t_word));
  init(*dico);
  input = "";
  my_putstr("Bienvenue dans le dicoWesh sisi !\n\n");
  while (my_strcmp(input, "quit") != 0)
    {
      my_putstr("1 : Afficher le dictionnaire en wesh\n");
      my_putstr("2 : Afficher le dictionnaire en fr\n");
      my_putstr("3 : Ajouter une définition\n");
      my_putstr("4 : Traduire du français au wesh\n");
      my_putstr("5 : Traduire du wesh au français\n");
      input = readLine();
      while (my_strcmp(input, "1") != 0 && my_strcmp(input, "2") != 0 &&
	     my_strcmp(input, "3") != 0 && my_strcmp(input, "4") != 0 &&
	     my_strcmp(input, "5") != 0)
	{
	  my_putstr("Veuillez entrer un chiffre entre 1 et 5\n");
	  input = readLine();
	}
      choice(input, dico);
      input = readLine();
    }
  //clean_dico(dico);
}
