//
// CommandManager.hh for Plazza in /home/polyeezy/rendu/CPP/mouillette_plazza/include
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Tue Apr 19 11:19:53 2016 Valerian Polizzi
// Last update Thu Apr 21 17:05:59 2016 Valerian Polizzi
//

#ifndef _COMMANDMANAGER_HH_
# define _COMMANDMANAGER_HH_

# include <string>
# include <iostream>
# include <Information.hh>
# include <Command.hh>
# include <vector>

class CommandManager
{
private:
  size_t			_current_idx;
  std::vector<Command*>		_commands;
public:
  CommandManager();
  ~CommandManager();

  void		createCommand();
  void		addFile(const std::string &file);
  void		setInfoToGet(const std::string &);
  void		dump();
  std::vector<Command*>		getCommands();
};

#endif
