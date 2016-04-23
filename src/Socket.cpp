//
// Socket.cpp for  in /home/polyeezy/rendu/CPP/mouillette_plazza
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Sat Apr 23 11:47:43 2016 Valerian Polizzi
// Last update Sat Apr 23 12:12:55 2016 Valerian Polizzi
//

#include <Socket.hh>
#include <PlazzaException.hh>

Socket::Socket() : _fd(-1)
{

}

Socket::~Socket()
{
  close(_fd);
}

int		Socket::Connect(const std::string &host, const int port)
{
  struct protoent	*pe;
  struct sockaddr_in	sin;

  if ((pe = getprotobyname("TCP")) == NULL)
    throw plazza::Exception("[PLAZZA] - can't init TCP connection");
  sin.sin_family = AF_INET;
  sin.sin_port = htons(port);
  sin.sin_addr.s_addr = inet_addr(host.c_str());
  if (connect(_fd, (const struct sockaddr*)&sin, sizeof(sin)) != 0)
    throw plazza::Exception("[PLAZZA] - unkown host : " + host);
  return (0);
}

int		Socket::send(const std::string &msg)
{
  int		len;

  if (_fd > 0)
    {
      if ((len = write(_fd, msg.c_str(), msg.length())) == -1)
	throw plazza::Exception("PLAZZA - communication error");
    }
  return (len);
}

std::string	Socket::get() const
{
  char		buff[128];
  int		len;

  if ((len = read(_fd, buff, 128)) == -1)
    return (std::string("ERROR"));
  return (std::string(buff));

}
