/*
** my_putchar.c for  in /home/senhaj_s/piscine/dicowesh
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Thu Nov  5 10:13:09 2015 SENHAJI Sophia
** Last update Thu Nov  5 10:13:17 2015 SENHAJI Sophia
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
