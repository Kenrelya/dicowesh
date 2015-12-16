/*
** my_dico.h for  in /home/senhaj_s/piscine/dicowesh
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Thu Nov  5 14:53:41 2015 SENHAJI Sophia
** Last update Thu Nov  5 14:56:29 2015 SENHAJI Sophia
*/

#ifndef __MY_DICO_H__
#define __MY_DICO_H__

typedef struct	s_word
{
  char		*french;
  char		*wesh;
  struct s_word	*next;
}		t_word;

#endif
