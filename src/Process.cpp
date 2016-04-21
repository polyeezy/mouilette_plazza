//
// Process.cpp for  in /home/weinha_l/Semestre_4/mouillette_plazza/src
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Mon Apr 11 16:12:03 2016 Loïc Weinhard
// Last update Thu Apr 21 16:52:40 2016 Loïc Weinhard
//

#include "Process.hh"

Process::Process(const int max_threads)
{
  _threads = new ThreadManager(max_threads);
  _inactive = 0;
}

Process::~Process()
{

}

ThreadManager*		Process::getThreadManager() const
{
  return (_threads);
}

Thread*		Process::operator[](const size_t i) const
{
  return (_threads->getThread(i));
}

bool		Process::isDead() const
{
  if (_inactive >= 5.0)
    return (true);
  return (false);
}

void		Process::refreshTime(const float time)
{
  _inactive = time;
}

void		Process::giveOrder(Thread *thread, Command *cmd)
{
  thread->setOrder(cmd);
}
