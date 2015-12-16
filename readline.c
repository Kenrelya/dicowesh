/*
** readline.c for  in /home/senhaj_s/piscine/dicowesh
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Thu Nov  5 10:11:16 2015 SENHAJI Sophia
** Last update Thu Nov  5 10:12:05 2015 SENHAJI Sophia
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

char		*readLine()

{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
