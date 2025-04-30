#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Persona {
    char nombre[10];
    int edad;
};

int main() {
    // Lectura de archivo de texto
    ifstream archivoEntrada("archivo.txt");
    if (!archivoEntrada) {
        cerr << "Error al leer archivo" << endl;
        return 1;
    }

    cout << "Leyendo archivo:" << endl;
    string linea;
    while (getline(archivoEntrada, linea)) {
        cout << linea << endl;
    }
    archivoEntrada.close();

    // Escritura de archivo binario
    ofstream archivoSalidaBinario("archivo.bin", ios::binary);
    if (!archivoSalidaBinario) {
        cerr << "Error al abrir el archivo binario" << endl;
        return 1;
    }

    // Crear instancias de Persona
    Persona p1 = {"juan", 20};
    Persona p2 = {"pedro", 30};
    Persona p3 = {"maria", 40};

    // Escribir los objetos en binario
    archivoSalidaBinario.write((char*)(&p1), sizeof(Persona));
    archivoSalidaBinario.write((char*)(&p2), sizeof(Persona));
    archivoSalidaBinario.write((char*)(&p3), sizeof(Persona));

    archivoSalidaBinario.close();

    return 0;
}