##
## Makefile for plazza in /home/polyeezy/rendu/CPP/mouillette_plazza
## 
## Made by Valerian Polizzi
## Login   <polyeezy@epitech.net>
## 
## Started on  Mon Apr  4 10:43:00 2016 Valerian Polizzi
## Last update Sat Apr 23 13:05:39 2016 Valerian Polizzi
##

CC		=		clang++

NAME		=		plazza

NAME_UI		=		plazza

SRC		=		src/main.cpp				\
				src/Plazza.cpp				\
				src/PlazzaException.cpp			\
				src/Lexer.cpp				\
				src/Parser.cpp				\
				src/Command.cpp				\
				src/CommandParser.cpp			\
				src/Socket.cpp				\
				src/SocketServer.cpp			\
				src/ThreadManager.cpp			\
				src/ProcessManager.cpp			\
				src/CommandManager.cpp			\
				src/CommunicationManager.cpp		\
				src/DecryptManager.cpp			\
				src/Process.cpp				\
				src/Thread.cpp				\

OBJ		=		$(SRC:.cpp=.o)

OBJ_UI		=		$(SRC_UI:.cpp=.o)

CPPFLAGS	+=		-Wall -Wextra -Werror -I./include -std=c++11 -g3

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
