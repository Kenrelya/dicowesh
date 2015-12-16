/*
** my_strcmp.c for  in /home/senhaj_s/piscine/dicowesh
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Thu Nov  5 10:49:38 2015 SENHAJI Sophia
** Last update Thu Nov  5 10:49:50 2015 SENHAJI Sophia
*/

int	my_strcmp(char *s1, char *s2)
{
  while (*s1 != '\0')
    {
      if (*s2 == '\0')
	{
	  return (1);
	}
      else if (*s1 > *s2)
	{
	  return (1);
	}
      else if (*s1 < *s2)
	{
	  return (-1);
	}
      s1++;
      s2++;
    }
  if (*s2 != '\0')
    {
      return (-1);
    }
  return (0);
}
