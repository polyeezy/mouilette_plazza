//
// main.cpp for plazza in /home/polyeezy/rendu/CPP/mouillette_plazza/src
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Mon Apr  4 10:43:15 2016 Valerian Polizzi
// Last update Wed Apr  6 16:27:31 2016 Valerian Polizzi
//

#include <Plazza.hh>

int		main(int ac, char **av)
{
  if (ac < 2)
    throw plazza::Exception("Usage : plazza THREADS_PER_PROCESS");
  Plazza	P(std::atoi(av[1]));
  return (0);
}
