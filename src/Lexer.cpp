//
// Lexer.cpp for  in /home/polizz_v/rendu/B4/CPP/cpp_nanotekspice/src
//
// Made by Valerian Polizzi
// Login   <polizz_v@epitech.net>
//
// Started on  Mon Feb 15 05:41:03 2016 Valerian Polizzi
// Last update Wed Apr  6 16:51:57 2016 Valerian Polizzi
//

#include "Lexer.hh"
#include "PlazzaException.hh"

Lexer::Lexer(const std::string &file)
{
  std::ifstream		File(file);
  std::string		line;
  std::string		token;
  std::string		lex;

  if (!File.is_open())
    throw plazza::Exception("[PLAZZA] Parse Error : Can't open '" + file);

  while (std::getline(File, line))
    {
      if (line.size() && line[0] != '#')
	{
	  std::stringstream content(line);
	  content >> token >> lex;
	  _lex[token] = lex;
	}
    }
}

Lexer::~Lexer()
{
}

bool		Lexer::lex_check(const std::string &line, const std::string &lex) const
{
  std::string s1(line);
  std::string s2(lex);

  if ((s1.size() > 0 && s2[0] == '*') || (std::isdigit(s1[0]) && s2[0] == '%') || (std::isalpha(s1[0]) && s2[0] == '#'))
    return (this->lex_check(s1.erase(0, 1) , s2) || this->lex_check(s1, s2.erase(0, 1)));
  if (s1.size() == 0 && s2[0] == '*')
    return (this->lex_check(s1, s2.erase(0, 1)));
  if (s1.size() > 0 && s2.size() > 0 && s1[0] == s2[0])
    return (this->lex_check(s1.erase(0, 1), s2.erase(0, 1)));
  if (s1 == s2 && s1.size() == 0 && s2.size() == 0)
    return (true);
  return (false);
}

int		Lexer::lex_line(const std::string &line) const
{
  for (std::map<std::string, std::string>::const_iterator it = _lex.begin(); it != _lex.end(); it++)
      {
	if (this->lex_check(line, it->second))
	  return (std::atoi(it->first.c_str()));
      }
  return (-1);
}
