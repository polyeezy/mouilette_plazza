//
// Parser.hh for  in /home/polizz_v/rendu/B4/CPP/cpp_nanotekspice/src
//
// Made by Valerian Polizzi
// Login   <polizz_v@epitech.net>
//
// Started on  Fri Feb 12 02:58:34 2016 Valerian Polizzi
// Last update Wed Apr  6 17:10:15 2016 Valerian Polizzi
//

#ifndef _PARSER_HH_
# define _PARSER_HH_

# include <map>
# include <iostream>
# include "PlazzaException.hh"
# include "Lexer.hh"

class Parser
{
  // std::vector<void (Parser::*)(const std::string&, const std::string&)>	_fcn;
  std::string						_line;
  Lexer							_lex;
  std::string						_input;
public:
  Parser();
  ~Parser();
  const Lexer		&getLexer();
  int			check_cmd(const std::string&);
  void			read();
  void			feed_lex(const std::string &file);
  void			open(const std::string & input);
  void			feed(const std::string&);
  void			incr_line(void);
};

#endif
