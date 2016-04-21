//
// Process.hh for  in /home/weinha_l/Semestre_4/mouillette_plazza/include
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Mon Apr 11 15:13:16 2016 Loïc Weinhard
// Last update Thu Apr 21 16:52:52 2016 Loïc Weinhard
//

#ifndef PROCESS_HH_
# define PROCESS_HH_

# include <vector>
# include "ThreadManager.hh"
# include "Command.hh"

# define INACTIVE_LIMIT 5.0

class	Process
{

private:
  ThreadManager*		_threads;
  float				_inactive;

public:
  Process(const int);
  ~Process();

  //Getters
  ThreadManager*	getThreadManager() const;
  Thread*		operator[](const size_t) const;
  bool			isDead() const;
  void			giveOrder(Thread *, Command *);

  //Others
  void		refreshTime(const float);
};

#endif
