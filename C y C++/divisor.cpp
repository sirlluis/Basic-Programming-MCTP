/*09/02/2012*/
/*by Luis Gerardor Ramirez Archundia*/
#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num1;
    cout<<"Ingrese otro numero"<<endl;
    cin>>num2;

    if(num1<num2){
        cout<<num2<<" es mayor que "<<num1<<endl;
        if(num2%num1==0){
            cout<<"y "<<num2<<" es multiplo de "<<num1<<endl;
        }
        else{
            cout<<"Ambos numeros no son multiplos";
        }
    }
    if(num1>num2){
        cout<<num1<<" es mayor que "<<num2<<endl;
        if(num1%num2==0){
            cout<<"y "<<num1<<" es multiplo de "<<num1<<endl;
        }
        else{
            cout<<"Ambos numeros no son multiplos";
        }
    }
    return 0;
}