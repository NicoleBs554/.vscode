#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct persona{
    char nombre[200];
    int id_registro, cedula, edad;
    float altura, peso;
    char genero;
}n;

int main(){
    int npersonas;
    fstream FILE("./archivo.bin", ios::out|ios::binary);

    cout << "inserte el numero de personas q decee registrar " << endl;
    cin >> npersonas;


    for (int i=0;i<npersonas;i++){
        n.id_registro=i+1;
    cout << "Ingrese el nombre de la persona: " << endl;
    cin >> n.nombre;
    cout << "Ingrese la cedula de la persona: " << endl;
    cin >> n.cedula;
    cout << "Ingrese la edad de la persona: " << endl;
    cin >> n.edad;
    cout << "Ingrese el peso de la persona: " << endl;
    cin >> n.peso;
    cout << "Ingrese la altura de la persona: " << endl;
    cin >> n.altura;
    cout << "Ingrese el genero H o M de la persona: " << endl;
    cin >> n.genero;
    FILE.write(reinterpret_cast < char *>(&n),sizeof(n));
    }
    FILE.close();

    return 0;
}


