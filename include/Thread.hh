//
// Thread.hh for  in /home/weinha_l/Semestre_4/mouillette_plazza/include
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Mon Apr 11 15:11:05 2016 Loïc Weinhard
// Last update Thu Apr 21 16:51:37 2016 Loïc Weinhard
//

#ifndef THREAD_HH_
# define THREAD_HH_

# include <string>
# include <pthread.h>
# include "Command.hh"
# include "Mutex.hh"
# include "VarCond.hh"

class	Thread
{
private:
  pthread_t			_thread;
  Command*			_order;
  Mutex				*_mutex;
  VarCond			*_varcond;
  bool				_active;

public:
  Thread();
  ~Thread();

  //Getters
  pthread_t		getThread() const;
  Command*		getOrder() const;
  Mutex*		getMutex() const;
  VarCond*		getVarCond() const;
  bool			isActive() const;

  //Others
  void			LockMutex();
  void			UnlockMutex();
  void			setOrder(Command *);
  void			clearOrder();
};

#endif
