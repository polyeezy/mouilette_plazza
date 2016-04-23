//
// ProcessManager.hh for  in /home/weinha_l/Semestre_4/mouillette_plazza/include
//
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
//
// Started on  Thu Apr 14 15:48:23 2016 Loïc Weinhard
// Last update Sat Apr 23 16:25:08 2016 Loïc Weinhard
//

#ifndef PROCESS_MANAGER_HH_
# define PROCESS_MANAGER_HH_

# include <Parser.hh>
# include <Process.hh>
# include <Command.hh>
# include <SocketServer.hh>

class	ProcessManager
{
private:
  int				_nb_threads;
  std::vector<Process*>		_processes;
  std::vector<Command*>		_orders;
  SocketServer			_server;

public:
  ProcessManager(const int);
  ~ProcessManager();

  //Getters
  Process*	operator[](const size_t) const;

  //Others
  void		createProcess();
  void		deleteInactiveProcesses();
  void		giveOrder(Process *, const Command*);
  void		sendOrder();
  void		setOrders(std::vector<Command*>&);
};

#endif
