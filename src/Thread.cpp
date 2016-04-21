//
// Thread.cpp for  in /home/weinha_l/Semestre_4/mouillette_plazza/src
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Mon Apr 11 16:22:37 2016 Loïc Weinhard
// Last update Thu Apr 21 16:51:42 2016 Loïc Weinhard
//

#include "Thread.hh"

Thread::Thread()
{
}

Thread::~Thread()
{

}


pthread_t	Thread::getThread() const
{
  return (_thread);
}

Command*	Thread::getOrder() const
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

void		Thread::setOrder(Command *order)
{
  _order = order;
}

void		Thread::clearOrder()
{
  delete _order;
  _active = false;
}
