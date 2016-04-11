//
// Thread.hh for  in /home/weinha_l/Semestre_4/mouillette_plazza/include
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Mon Apr 11 15:11:05 2016 Loïc Weinhard
// Last update Mon Apr 11 16:25:55 2016 Loïc Weinhard
//

#ifndef THREAD_HH_
# define THREAD_HH_

# include <string>
# include <pthread.h>
# include "Mutex.hh"
# include "VarCond.hh"

class	Thread
{
private:
  pthread_t			_thread;
  std::string			_order;
  Mutex				*_mutex;
  VarCond			*_varcond;
  bool				_active;

public:
  Thread(int);
  ~Thread();

  //Getters
  pthread_t		getThread() const;
  std::string		getOrder() const;
  Mutex*		getMutex() const;
  VarCond*		getVarCond() const;
  bool			isActive() const;

  //Others
  void			LockMutex();
  void			UnlockMutex();
  void			setOrder(const std::string &);
  void			clearOrder();
};

#endif
