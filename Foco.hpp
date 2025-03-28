class Foco
{ 
private:
    bool encendido;

public:
  foco(){
      encendido = false;
  }
void Encender(){
    encendido = true;
} 
void Apagar(){
    encendido = false;
}
char LeerEstado(){
    if(encendido)
        return'*';
    else
        return'-';
}

};
