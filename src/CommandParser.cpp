//
// Parser.cpp for  in /home/polizz_v/rendu/B4/CPP/cpp_nanotekspice/src
//
// Made by Valerian Polizzi
// Login   <polizz_v@epitech.net>
//
// Started on  Fri Feb 12 03:01:42 2016 Valerian Polizzi
// Last update Thu Apr 14 17:32:02 2016 Valerian Polizzi
//

#include <CommandParser.hh>
# include <fstream>

CommandParser::CommandParser() : _line("0"), _lex("misc/lex/plazza.lex")
{
  //  this->_fcn.push_back(&CommandParser::createTrue);
}

CommandParser::~CommandParser()
{
}

void		CommandParser::feed(const std::string &input)
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

std::string	epur_alpha(std::string str)
{
  size_t i = 0;
  size_t len = str.length();
  while(i < len)
    {
      if (!isalnum(str[i]))
	{
	str.erase(i,1);
	len--;
      }
      else
	i++;
    }
  return (str);
}

const Lexer		&CommandParser::getLexer()
{
  return (_lex);
}

int		CommandParser::check_cmd(const std::string &line)
{
  int		token_id = this->_lex.lex_line(line);

  if (token_id == -1)
    throw plazza::Exception("[NTS] Parse Error : unknown command : '" + line + "' (line " + this->_line + ")");
  return (token_id);
}

void		CommandParser::incr_line(void)
{
  this->_line = std::to_string(atoi(this->_line.c_str()) + 1);
}
