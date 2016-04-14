//
// ThreadManager.cpp for  in /home/weinha_l/Semestre_4/mouillette_plazza/src
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Thu Apr 14 16:05:10 2016 Loïc Weinhard
// Last update Thu Apr 14 16:49:06 2016 Loïc Weinhard
//

#include <ThreadManager.hh>

ThreadManager::ThreadManager(const int nb_threads)
{
  int	i;

  i = 0;
  while (i < nb_threads)
    {
      _threads.push_back(new Thread);
      i += 1;
    }
}

ThreadManager::~ThreadManager()
{

}

Thread*		ThreadManager::getThread(const size_t nb) const
{
  if (nb >= _threads.size())
    return (NULL);
  return (_threads[nb]);
}

Thread*		ThreadManager::operator[](const size_t nb) const
{
  return (this->getThread(nb));
}
