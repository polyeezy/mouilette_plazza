//
// SocketServer.hh for  in /home/polyeezy/rendu/CPP/mouillette_plazza/include
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Sat Apr 23 12:19:10 2016 Valerian Polizzi
// Last update Sat Apr 23 13:17:32 2016 Valerian Polizzi
//

#ifndef _SOCKETSERVER_HH_
# define _SOCKETSERVER_HH_

# include <iostream>
# include <string>
# include <sys/types.h>
# include <sys/socket.h>
# include <netinet/in.h>
# include <unistd.h>
# include <stdlib.h>
# include <cstring>


class SocketServer
{
private:
  sockaddr_in	_server_sock;
  sockaddr_in	_client_sock;
  int		_server_fd;
  int		_client_fd;
public:
  SocketServer();
  ~SocketServer();

  int	run();
};

#endif
