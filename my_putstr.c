/*
** my_putstr.c for  in /home/senhaj_s/piscine/dicowesh
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Thu Nov  5 10:12:35 2015 SENHAJI Sophia
** Last update Thu Nov  5 10:12:52 2015 SENHAJI Sophia
*/

void	my_putchar(char c);

void	my_putstr(char str[])
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
