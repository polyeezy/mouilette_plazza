//
// PlazzaException.hh for  in /home/polyeezy/rendu/CPP/mouillette_plazza/include
//
// Made by Valerian Polizzi
// Login   <polyeezy@epitech.net>
//
// Started on  Mon Apr  4 10:45:47 2016 Valerian Polizzi
// Last update Mon Apr  4 10:51:52 2016 Valerian Polizzi
//

#ifndef _PLAZZAEXCEPTION_HH_
# define _PLAZZAEXCEPTION_HH_

# include <exception>
# include <string>

namespace plazza
{
  class Exception : public std::exception
  {
  private:
    std::string _msg;
  public:
    Exception(const std::string &);
    virtual ~Exception() throw(){}
    virtual const char *what () const throw()
    {
      return (_msg.c_str());
    }
  };
}

#endif
