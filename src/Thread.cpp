//
// Thread.cpp for  in /home/weinha_l/Semestre_4/mouillette_plazza/src
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Mon Apr 11 16:22:37 2016 Loïc Weinhard
// Last update Mon Apr 11 16:29:49 2016 Loïc Weinhard
//

#include "Thread.hh"

Thread::Thread(int max_threads)
{
  (void)max_threads;
}

Thread::~Thread()
{

}


pthread_t	Thread::getThread() const
{
  return (_thread);
}

std::string	Thread::getOrder() const
{
  return (_order);
}

Mutex*		Thread::getMutex() const
{
  return (_mutex);
}

VarCond*	Thread::getVarCond() const
{
  return (_varcond);
}

bool		Thread::isActive() const
{
  return (_active);
}

void		Thread::LockMutex()
{

}

void		Thread::UnlockMutex()
{

}

void		Thread::setOrder(const std::string &order)
{
  _order = order;
}

void		Thread::clearOrder()
{
  _order = "";
  _active = false;
}
