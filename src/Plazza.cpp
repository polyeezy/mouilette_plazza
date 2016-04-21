//
// Plazza.cpp for  in /home/polyeezy/rendu/CPP/mouillette_plazza/src
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Wed Apr  6 16:21:09 2016 Valerian Polizzi
// Last update Thu Apr 21 14:41:32 2016 Valerian Polizzi
//

#include <Plazza.hh>

Plazza::Plazza(const int nb_t) : _processes(new ProcessManager(nb_t))
{
  this->read();
}

Plazza::~Plazza()
{

}

void		Plazza::read()
{
  std::string	input("");

  std::getline(std::cin, input);
  _parser.feed(input);
  _parser.getCommandManager().dump();
}

void		Plazza::waitOrders()
{
  std::string	input("");

  while (true)
    {
      std::getline(std::cin, input);
      _parser.feed(input);
    }
}
