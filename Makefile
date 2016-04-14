##
## Makefile for plazza in /home/polyeezy/rendu/CPP/mouillette_plazza
## 
## Made by Valerian Polizzi
## Login   <polyeezy@epitech.net>
## 
## Started on  Mon Apr  4 10:43:00 2016 Valerian Polizzi
## Last update Thu Apr 14 17:38:35 2016 Valerian Polizzi
##

CC		=		clang++

NAME		=		plazza

NAME_UI		=		plazza

SRC		=		src/main.cpp				\
				src/Plazza.cpp				\
				src/PlazzaException.cpp			\
				src/Lexer.cpp				\
				src/Parser.cpp				\
				src/CommandParser.cpp			\
				src/ThreadManager.cpp			\
				src/ProcessManager.cpp			\
				src/CommunicationManager.cpp		\
				src/DecryptManager.cpp			\
				src/Process.cpp				\
				src/Thread.cpp				\

OBJ		=		$(SRC:.cpp=.o)

OBJ_UI		=		$(SRC_UI:.cpp=.o)

CPPFLAGS	+=		-Wall -Wextra -Werror -I./include -std=c++11

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
