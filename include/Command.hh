//
// Command.hh for  in /home/polyeezy/rendu/CPP/mouillette_plazza
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Thu Apr 21 13:15:48 2016 Valerian Polizzi
// Last update Thu Apr 21 13:39:41 2016 Valerian Polizzi
//

#ifndef _COMMAND_HH_
# define _COMMAND_HH_

# include <vector>
# include <iostream>
# include <string>

class Command
{
private:
  std::string			_info;
  std::vector<std::string>	_files;
  public:
  Command();
  ~Command();

  void		addFile(const std::string&);
  void		setInfoToGet(const std::string&);
  void		dump();
  void		run();
  const std::string	&getInfoToGet();
};

# endif
