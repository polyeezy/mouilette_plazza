//
// Socket.hh for  in /home/polyeezy/rendu/CPP/mouillette_plazza/include
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Sat Apr 23 11:32:49 2016 Valerian Polizzi
// Last update Sat Apr 23 12:03:55 2016 Valerian Polizzi
//

#ifndef _SOCKET_HH_
# define _SOCKET_HH_

# include <iostream>
# include <string>
# include <netinet/in.h>
# include <netdb.h>
# include <cstdlib>
# include <arpa/inet.h>
# include <unistd.h>
# include <PlazzaException.hh>

class Socket
{
private:
  int			_fd;
public:
  Socket();
  ~Socket();

  int	Connect(const std::string &, const int);
  int	send(const std::string &);
  std::string	get() const;
  bool	isConnected() const;

};

#endif
