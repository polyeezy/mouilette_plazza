//
// Plazza.hh for  in /home/polyeezy/rendu/CPP/mouillette_plazza
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Wed Apr  6 16:19:51 2016 Valerian Polizzi
// Last update Thu Apr 21 16:21:26 2016 Loïc Weinhard
//

#ifndef _PLAZZA_HH_
# define _PLAZZA_HH_

# include <string>
# include <iostream>
# include <cstdlib>
# include <PlazzaException.hh>
# include <Lexer.hh>
# include <CommandParser.hh>
# include <CommandManager.hh>
# include <ProcessManager.hh>
# include <Information.hh>

class Plazza
{
private:
  CommandParser		_parser;
  ProcessManager*	_processes;
  CommandManager	_cmd_manager;
public:
  Plazza(const int);
  ~Plazza();

  const CommandManager	&getCmdManager();
  void			read();
  void			loop();
};

#endif
