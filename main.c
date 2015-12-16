/*
** main.c for  in /home/senhaj_s/piscine/dicowesh
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Thu Nov  5 09:57:19 2015 SENHAJI Sophia
** Last update Thu Nov  5 10:30:37 2015 SENHAJI Sophia
*/

#include "fonctions.h"

int	main(int argc, char **argv)
{
  if (argc > 1)
    my_putstr("Mets pas d'arguments wesh\n");
  else
    menu();
  argv++;
  return (0);
}
