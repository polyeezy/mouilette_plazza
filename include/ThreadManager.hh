//
// ThreadManager.hh for  in /home/weinha_l/Semestre_4/mouillette_plazza/include
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Thu Apr 14 15:57:13 2016 Loïc Weinhard
// Last update Thu Apr 14 16:44:03 2016 Loïc Weinhard
//

#ifndef THREAD_MANAGER_HH_
# define THREAD_MANAGER_HH_

# include <vector>
# include <Thread.hh>

class	ThreadManager
{
private:
  std::vector<Thread*>	_threads;

public:
  ThreadManager(const int);
  ~ThreadManager();

  //Getters
  Thread*	operator[](const size_t) const;
  Thread*	getThread(const size_t) const;
};

#endif
