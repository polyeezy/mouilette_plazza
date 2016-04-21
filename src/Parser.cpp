//
// Parser.cpp for  in /home/polizz_v/rendu/B4/CPP/cpp_nanotekspice/src
//
// Made by Valerian Polizzi
// Login   <polizz_v@epitech.net>
//
// Started on  Fri Feb 12 03:01:42 2016 Valerian Polizzi
// Last update Tue Apr 19 17:57:22 2016 Loïc Weinhard
//

#include <Parser.hh>
# include <fstream>

Parser::Parser() : _line("0"), _lex("misc/lex/plazza.lex")
{
  //  this->_fcn.push_back(&Parser::createTrue);
}

Parser::~Parser()
{
}

void		Parser::feed(const std::string &input)
{
  std::stringstream	content(input);
  std::string		token("");
  std::string		value("");
  int			token_id(0);

  content >> token >> value;
  if (input.size() == 0)
    throw plazza::Exception("[plazza] Syntax error : Empty input (line " + this->_line + ")");
  if ((token_id = this->_lex.lex_line(token)) == -1)
      throw plazza::Exception("[plzaa] Syntax error : Implicit input '" + input + "' (line " + this->_line + ")");
  // if (token_id >= 6)
  // (this->*_fcn[token_id - 6])(token, value);
}

const Lexer		&Parser::getLexer()
{
  return (_lex);
}

int		Parser::check_cmd(const std::string &line)
{
  int		token_id = this->_lex.lex_line(line);

  if (token_id == -1)
    throw plazza::Exception("[NTS] Parse Error : unknown command : '" + line + "' (line " + this->_line + ")");
  return (token_id);
}

void		Parser::incr_line(void)
{
  this->_line = std::to_string(atoi(this->_line.c_str()) + 1);
}
