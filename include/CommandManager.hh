//
// CommandManager.hh for Plazza in /home/polyeezy/rendu/CPP/mouillette_plazza/include
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Tue Apr 19 11:19:53 2016 Valerian Polizzi
// Last update Tue Apr 19 11:28:51 2016 Valerian Polizzi
//

#ifndef _COMMANDMANAGER_HH_
# define _COMMANDMANAGER_HH_

# include <string>
# include <iostream>
# include <Information.hh>

class CommandManager
{
private:
  size_t	_current_idx;
public:
  CommandManager();
  ~CommandManager();

  void		createCommand();
  void		addFile(const std::string &file);
  void		setInfoToGet(const Information);

};

#endif
