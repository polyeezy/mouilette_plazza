//
// SocketServer.cpp for  in /home/polyeezy/rendu/CPP/mouillette_plazza
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Sat Apr 23 12:59:28 2016 Valerian Polizzi
// Last update Sat Apr 23 15:48:16 2016 Valerian Polizzi
//

#include <SocketServer.hh>
#include <PlazzaException.hh>

SocketServer::SocketServer() : _port(4242),_server_fd(-1), _client_fd(-1)
{
  _server_sock.sin_family = AF_INET;
  _server_sock.sin_addr.s_addr = INADDR_ANY;
  _server_sock.sin_port = htons(_port);
}

SocketServer::~SocketServer()
{
}

int		SocketServer::run()
{
  int		connect;
  int		len;
  std::string	read;
  char		buff[128];

  if ((_server_fd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
    throw plazza::Exception("[PLAZZA] - can't create socket server");
  if (bind(_server_fd, (struct sockaddr *)&_server_sock, sizeof(_server_sock)) < 0)
    throw plazza::Exception("[PLAZZA] - server : bind error");
  std::cout << "SERVER LISTENING " << "localhost:" << _port  << std::endl;
  listen(_server_fd, 3);
  std::cout << "SERVER AWAITING CONNECTION" << std::endl;
  connect = sizeof(struct sockaddr_in);

  if ((_client_fd = accept(_server_fd, (struct sockaddr *)&_client_sock, (socklen_t*)&connect)) < 0)
    throw plazza::Exception("[PLAZZA] - can't accept client");
  while ((len = recv(_client_fd, buff, 128, 0)) > 0)
    write(0, buff, strlen(buff));
  return (0);
}
