//
// Process.cpp for  in /home/weinha_l/Semestre_4/mouillette_plazza/src
// 
// Made by Loïc Weinhard
// Login   <weinha_l@epitech.net>
// 
// Started on  Mon Apr 11 16:12:03 2016 Loïc Weinhard
// Last update Thu Apr 14 14:48:35 2016 Loïc Weinhard
//

#include "Process.hh"

Process::Process(const int max_threads)
{
  int		i;

  i = 0;
  while (i < max_threads)
    {
      i += 1;
    }
}

Process::~Process()
{

}

Thread*		Process::operator[](const size_t i) const
{
  if (i >= _threads.size())
    return (NULL);
  return (_threads[i]);
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
