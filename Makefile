##
## Makefile for plazza in /home/polyeezy/rendu/CPP/mouillette_plazza
## 
## Made by Valerian Polizzi
## Login   <polyeezy@epitech.net>
## 
## Started on  Mon Apr  4 10:43:00 2016 Valerian Polizzi
## Last update Thu Apr 21 15:02:08 2016 Loïc Weinhard
##

CC		=		g++

NAME		=		plazza

NAME_UI		=		plazza

SRC		=		src/Plazza.cpp				\
				src/Process.cpp				\
				src/PlazzaException.cpp			\
				src/Lexer.cpp				\
				src/Parser.cpp				\
				src/CommandParser.cpp			\
				src/ThreadManager.cpp			\
				src/CommandManager.cpp			\
				src/CommunicationManager.cpp		\
				src/DecryptManager.cpp			\
				src/Thread.cpp				\
				src/main.cpp				\
				src/ProcessManager.cpp			\

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
