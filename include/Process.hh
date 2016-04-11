//
// Process.hh for  in /home/weinha_l/Semestre_4/mouillette_plazza/include
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Mon Apr 11 15:13:16 2016 Loïc Weinhard
// Last update Mon Apr 11 16:28:18 2016 Loïc Weinhard
//

#ifndef PROCESS_HH_
# define PROCESS_HH_

# include <vector>
# include "Thread.hh"

# define INACTIVE_LIMIT 5.0

class	Process
{

private:
  std::vector<Thread *>		_threads;
  float				_inactive;

public:
  Process(int);
  ~Process();

  //Getters
  Thread*	operator[](size_t) const;
  bool		isDead() const;

  //Others
  void		refreshTime(float);
};

#endif
