//Este programa es un ejemplo del uso de encabezados
//en el que podemos encapsular una funcion en un archivo .h 
//el encabezado sustituye un valor dado por otro usando un paso por referencia

//by Luis Gerardo Ramirez Archundia
#include <iostream>
#include "miFuncion.h" 

using namespace std;
int main()
{
    int a, b;
    cout<<"Ingrese un numero entero"<<endl;
    cin>>a;
    cout<<"Ingrese otro numero entero"<<endl;
    cin>>b;
    cout<<"El primer numero que ingreso fue "<< a << " ahora es "<< cambioXref(a,b) <<endl;

return 0;
}