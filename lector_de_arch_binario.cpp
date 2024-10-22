#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

struct npersonas{
    char nombre[200];
    int id_registro, cedula, edad;
    float altura, peso;
    char genero[1];
}n;

int main(){
    fstream FILE("./archivo.bin", ios::in|ios::binary);
    FILE.seekg(sizeof(n)*0, ios::beg);
    cout << FILE.tellg() << endl;
    FILE.read(reinterpret_cast < char *>(&n), sizeof(n));
    cout << "========================" << endl
    << "id_registro: " << n.id_registro << endl
    << "Nombre: " << n.nombre << endl
    << "Genero: " << n.genero << endl
    << "Cedula: " << n.cedula << endl
    << "Edad: " << n.edad << endl
    << "Altura: " << n.altura << "m" << endl
    << "Peso: " << n.peso << "Kg" << endl
    << "========================" << endl;
    FILE.close();

    return 0;
}