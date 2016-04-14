//
// ProcessManager.cpp for  in /home/weinha_l/Semestre_4/mouillette_plazza/src
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Thu Apr 14 16:01:11 2016 Loïc Weinhard
// Last update Thu Apr 14 16:57:00 2016 Loïc Weinhard
//

#include <ProcessManager.hh>

ProcessManager::ProcessManager(const int nb_threads)
{
  _nb_threads = nb_threads;
  this->createProcess();
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
