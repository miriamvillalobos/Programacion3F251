#pragma once
#include <iostream>
#include "Foco.hpp"

class Serie
{
private:
    Foco foquitos[10];
    
    public:
    Serie() {}
    ~Serie() {}
    void EncenderTodo (){
      this->EncenderCantidad(10);
    }
    void ApagarTodo (){
    //Apagar
    for (size_t i = 0; i < 10; i++)
    {
        foquitos[i].Apagar();
    }
    }
    void EncenderCantidad(size_t cantidad) {
       //Encender
       for (size_t i = 0; i < 10; i++)
       {
        foquitos[i].Encender();
       }
        
    }
    void Imprimir() {
        for (size_t i = 0; i < 10; i++)
        {
            std::cout << foquitos[i].LeerEstado();
        }
    }
};