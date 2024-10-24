#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    int x, cedula=0;
    string nombre, correo;
    int data;
    ofstream output ("./archivos.txt");

    if(!output.is_open()){
        cout<<"No se puede abrir ni crear archivo"<<endl;
        return 0;
    }

    cout<<"Cuantos datos desea ingresar?"<<endl;
    cin>>x;

    while(x>0){
        cout<<"Ingrese el nombre de la persona: "<<endl;
        cin>>nombre;
        cout<<"Ingrese cedula: "<<endl;
        cin>>cedula;
        cout<<"Ingrese el correo electronico: "<< endl;
        cin>>correo;
        output<<nombre<<" "<<cedula<<" "<<correo<<" "<<endl;
        x --;
    }

}