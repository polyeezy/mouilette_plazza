//
// main.cpp for plazza in /home/polyeezy/rendu/CPP/mouillette_plazza/src
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Mon Apr  4 10:43:15 2016 Valerian Polizzi
// Last update Wed Apr  6 15:08:16 2016 Loïc Weinhard
//

#include <PlazzaException.hh>

int		main(int ac, char **av)
{
  if (ac < 2)
    throw plazza::Exception("Usage : plazza THREADS_PER_PROCESS");
  (void)av;
  return (0);
}
