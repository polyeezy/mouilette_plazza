//
// CommandManager.cpp for  in /home/polyeezy/rendu/CPP/mouillette_plazza
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Tue Apr 19 11:24:39 2016 Valerian Polizzi
// Last update Fri Apr 22 17:00:48 2016 Valerian Polizzi
//

#include <CommandManager.hh>

CommandManager::CommandManager() : _current_idx(-1)
{
  std::cout << "HELLO CMD MANAGER " << std::endl;
}

CommandManager::~CommandManager()
{
  std::cout << "RIP CMD MANAGER " << std::endl;
}

void		CommandManager::createCommand()
{
   _commands.push_back(new Command);
  _current_idx++;
}

void		CommandManager::addFile(const std::string &file)
{
  _commands[_current_idx]->addFile(file);
}

void		CommandManager::setInfoToGet(const std::string  &info)
{
  _commands[_current_idx]->setInfoToGet(info);
}

void		CommandManager::dump()
{
  for (std::vector<Command*>::iterator it = _commands.begin(); it != _commands.end(); it++)
    {
      (*it)->dump();
    }
}

std::vector<Command*>	&CommandManager::getCommands()
{
  return (_commands);
}
