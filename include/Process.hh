//
// Process.hh for  in /home/weinha_l/Semestre_4/mouillette_plazza/include
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Mon Apr 11 15:13:16 2016 Loïc Weinhard
// Last update Tue Apr 19 17:52:38 2016 Loïc Weinhard
//

#ifndef PROCESS_HH_
# define PROCESS_HH_

# include <vector>
# include "ThreadManager.hh"

# define INACTIVE_LIMIT 5.0

class	Process
{

private:
  ThreadManager*		_threads;
  std::vector<std::string>	_queue;
  float				_inactive;

public:
  Process(const int);
  ~Process();

  //Getters
  ThreadManager*	getThreadManager() const;
  Thread*		operator[](const size_t) const;
  bool			isDead() const;
  void			fillQueue(const std::string &);
  void			giveOrder(Thread *, const std::string &);

  //Others
  void		refreshTime(const float);
};

#endif
