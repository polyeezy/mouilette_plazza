//
// main.cpp for plazza in /home/polyeezy/rendu/CPP/mouillette_plazza/src
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Mon Apr  4 10:43:15 2016 Valerian Polizzi
// Last update Sat Apr 23 13:18:11 2016 Valerian Polizzi
//

#include <Plazza.hh>

int		main(int ac, char **av)
{
  (void)ac;
  (void)av;
  // if (ac < 2)
  //   throw plazza::Exception("Usage : plazza THREADS_PER_PROCESS");
  // Plazza	P(std::atoi(av[1]));

  SocketServer		server;

  server.run();
  return (0);
}
