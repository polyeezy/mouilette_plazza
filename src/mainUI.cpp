//
// main.cpp for plazza in /home/polyeezy/rendu/CPP/mouillette_plazza/src
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Mon Apr  4 10:43:15 2016 Valerian Polizzi
// Last update Mon Apr  4 10:53:58 2016 Valerian Polizzi
//

#include <PlazzaException.hh>

int		main(int ac, char **av)
{
  if (ac < 2)
    throw plazza::Exception("[PLAZZA] 1 parameter required");
  (void)av;
  return (0);
}
