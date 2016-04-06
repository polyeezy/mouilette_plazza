//
// Plazza.hh for  in /home/polyeezy/rendu/CPP/mouillette_plazza
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Wed Apr  6 16:19:51 2016 Valerian Polizzi
// Last update Wed Apr  6 17:15:14 2016 Valerian Polizzi
//

#ifndef _PLAZZA_HH_
# define _PLAZZA_HH_

# include <string>
# include <iostream>
# include <cstdlib>
# include <PlazzaException.hh>
# include <Lexer.hh>
# include <Parser.hh>

enum Information
  {
    PHONE_NUMBER,
    EMAIL_ADRESS,
    IP_ADRESS
  };

class Plazza
{
private:
  int		_nb_threads;
  Parser	_parser;
public:
  Plazza(const int nb_t);
  ~Plazza();
  void		read();
};

#endif
