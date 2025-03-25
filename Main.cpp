#include<iostream>
#include"Foco.hpp"

int main(int argc, char const*argv[])
{
  Foco foco1;
  foco1.Encender();
  std::cout
    <<"Foco1:"
    <<foco1.LeerEstado()
    <<std::endl;
  std::cout
    <<"argc:"
    <<argc
    <<std::endl;
  return 0;
}
