//
// Command.cpp for  in /home/polyeezy/rendu/CPP/mouillette_plazza
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Thu Apr 21 13:18:07 2016 Valerian Polizzi
// Last update Thu Apr 21 14:37:53 2016 Valerian Polizzi
//

#include <Command.hh>

Command::Command()
{
}

Command::~Command()
{
}

void		Command::addFile(const std::string &file)
{
  _files.push_back(file);
}

void		Command::setInfoToGet(const std::string &toget)
{
  _info = toget;
}

const std::string	&Command::getInfoToGet()
{
  return (_info);
}

void		Command::dump()
{
  std::cout << "\t" << this->getInfoToGet() << std::endl;

  for (std::vector<std::string>::iterator it = _files.begin(); it != _files.end(); it++)
    {
      std::cout << "\t\t" << *it << std::endl;
    }
}

void		Command::run()
{
}
