//
// main.cpp for plazza in /home/polyeezy/rendu/CPP/mouillette_plazza/src
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Mon Apr  4 10:43:15 2016 Valerian Polizzi
// Last update Thu Apr 21 15:40:55 2016 Valerian Polizzi
//

#include <Plazza.hh>

int		main(int ac, char **av)
{
  if (ac < 2)
    throw plazza::Exception("Usage : plazza THREADS_PER_PROCESS");

  Plazza	P(std::atoi(av[1]));

  // ProcessManager	pm(4);
  // Thread		*lol;
  // Process		tmp(4);

  // (void)P;
  // tmp = *pm[1];
  // lol = tmp[2];
  // (void)lol;
  return (0);
}
