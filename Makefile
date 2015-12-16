##
## Makefile for  in /home/senhaj_s/piscine/dicowesh
## 
## Made by SENHAJI Sophia
## Login   <senhaj_s@etna-alternance.net>
## 
## Started on  Thu Nov  5 10:13:25 2015 SENHAJI Sophia
## Last update Fri Nov  6 19:34:46 2015 SENHAJI Sophia
##

CC =	gcc
NAME = 	dicoWESH
SRC = 	my_putchar.c \
	my_putstr.c \
	main.c \
	dico.c \
	readline.c \
	my_strcmp.c \
	fonctions.c \
	erreur.c
OBJ = $(SRC:%.c=%.o)
RM = rm -f
CFLAGS = -W -Werror -Wall
$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re :	fclean all