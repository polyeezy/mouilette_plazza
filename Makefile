##
## Makefile for plazza in /home/polyeezy/rendu/CPP/mouillette_plazza
## 
## Made by Valerian Polizzi
## Login   <polyeezy@epitech.net>
## 
## Started on  Mon Apr  4 10:43:00 2016 Valerian Polizzi
## Last update Wed Apr  6 14:53:23 2016 Valerian Polizzi
##

CC		=		g++

NAME		=		plazza

NAME_UI		=		plazza

SRC		=		src/main.cpp				\
				src/PlazzaException.cpp			\

OBJ		=		$(SRC:.cpp=.o)

OBJ_UI		=		$(SRC_UI:.cpp=.o)

CPPFLAGS	+=		-Wall -Wextra -Werror -W -I./include

MR_CLEAN        =               find ./ \( -name "*~" -o -name "\#*\#" \) -delete

all		:		$(NAME)

$(NAME)		:		$(OBJ)
				$(CC) $(OBJ) -o $(NAME) $(CPPFLAGS)

clean		:
				$(MR_CLEAN)
				rm -f $(OBJ)

fclean		:		clean
				rm -f $(NAME)

re		:		clean all

.PHONY		:		all clean fclean re
