//
// ProcessManager.cpp for  in /home/weinha_l/Semestre_4/mouillette_plazza/src
//
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
//
// Started on  Thu Apr 14 16:01:11 2016 Loïc Weinhard
// Last update Fri Apr 22 17:04:17 2016 Valerian Polizzi
//

#include <ProcessManager.hh>

ProcessManager::ProcessManager(const int nb_threads)
{
  _nb_threads = nb_threads;
}

ProcessManager::~ProcessManager()
{

}

Process*	ProcessManager::operator[](const size_t i) const
{
  if (i >= _processes.size())
    return (NULL);
  return (_processes[i]);
}

void		ProcessManager::createProcess()
{
  _processes.push_back(new Process(_nb_threads));
}

void		ProcessManager::deleteInactiveProcesses()
{
  size_t	i;

  i = 0;
  while (i < _processes.size())
    {
      if (_processes[i]->isDead())
	delete _processes[i];
      i += 1;
    }
}

void		ProcessManager::sendOrder()
{
  size_t	i;
  size_t	x;

  i = 0;
  while (_processes[i])
    {
      x = 0;
      while (_processes[i][0][x])
	{
	  if (!_processes[i][0][x]->isActive())
	    {
	      _processes[i]->giveOrder(_processes[i][0][x], _orders.back());
	      _orders.pop_back();
	      return;
	    }
	  x += 1;
	}
      i += 1;
    }
  this->createProcess();
  this->sendOrder();
}

void		ProcessManager::setOrders(std::vector<Command *> &orders)
{
  _orders = orders;
  _orders[0]->dump();
}
