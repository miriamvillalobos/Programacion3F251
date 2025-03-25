class Foco
{ 
private:
    bool estadoActual;

public:
Foco(){}
~Foco(){}
void Encender(){
  estadoActual = true;
}
void Apagar (){
  estadoActual = false;
}
bool LeerEstado(){
  return estadoActual;
}
};
