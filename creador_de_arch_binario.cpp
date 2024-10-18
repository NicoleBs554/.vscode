#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct npersonas{
    int id_registro, cedula, edad;
    float altura, peso;
    string nombre;
    char genero[1];

}n;

int main(){
    int npersonas;
    cout << "inserte el numero de personas q decee registrar " << endl;
    cin >> npersonas;


    for (int i=0;i<npersonas;i++){
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
    cout << "Ingrese el genero de la persona: " << endl;
    cin >> n.genero;
    }
    fstream FILE(".archivo.bin", ios::out|ios::binary);

    FILE.write(reinterpret_cast < char *>(&n),sizeof(npersonas));

    FILE.close();

    return 0;
}


