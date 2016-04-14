//
// Plazza.hh for  in /home/polyeezy/rendu/CPP/mouillette_plazza
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Wed Apr  6 16:19:51 2016 Valerian Polizzi
// Last update Thu Apr 14 17:27:22 2016 Valerian Polizzi
//

#ifndef _PLAZZA_HH_
# define _PLAZZA_HH_

# include <string>
# include <iostream>
# include <cstdlib>
# include <PlazzaException.hh>
# include <Lexer.hh>
# include <CommandParser.hh>
# include <ProcessManager.hh>

enum Information
  {
    PHONE_NUMBER,
    EMAIL_ADRESS,
    IP_ADRESS
  };

class Plazza
{
private:
  CommandParser		_parser;
  ProcessManager*	_processes;

public:
  Plazza(const int);
  ~Plazza();

  void			read();
};

#endif
