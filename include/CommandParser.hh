//
// Parser.hh for  in /home/polizz_v/rendu/B4/CPP/cpp_nanotekspice/src
//
// Made by Valerian Polizzi
// Login   <polizz_v@epitech.net>
//
// Started on  Fri Feb 12 02:58:34 2016 Valerian Polizzi
// Last update Tue Apr 19 12:16:04 2016 Valerian Polizzi
//

#ifndef _COMMANDPARSER_HH_
# define _COMMANDPARSER_HH_

# include <map>
# include <iostream>
# include <CommandManager.hh>
# include <PlazzaException.hh>
# include <Lexer.hh>

class CommandParser
{
  std::string						_line;
  Lexer							_lex;
  std::string						_input;
  CommandManager					_cmd_manager;
public:
  CommandParser();
  ~CommandParser();
  const Lexer		&getLexer();
  int			check_cmd(const std::string&);
  void			read();
  void			feed_lex(const std::string &file);
  void			open(const std::string & input);
  void			feed(const std::string&);
  void			incr_line(void);
  CommandManager	&getCommandManager();
};

#endif
