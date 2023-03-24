//Mediante una función este programa cambia el valor de una 
//variable por paso de referencia
//dada por el usuario

//by Luis Gerardo Ramirez Archundia @23/03/2023
#include <iostream>
using namespace std;

int cambioXref(int& a, int& b)
{
    a=b;
    return a;
}

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