/*by Luis Gerardo Ramirez Archundia*/
/*09/02/2023*/
#include<iostream>
using namespace std;

int main(){
    int year_now, day_now, month_now;
    int year_bd, day_bd, month_bd;
    float bd_dias, now_dias, edad;

    /*Para la fecha de cumpleaños (bd)*/
    cout<<"Ingrese el year de su cumple: "<<endl;
    cin>>year_bd;

    cout<<"Ingrese el mes de su cumple: "<<endl;
    cin>>month_bd;

    cout<<"Ingrese el dia de su cumple: "<<endl;
    cin>>day_bd;

    /*Para la fecha actual*/
    cout<<"Ingrese el year actual: "<<endl;
    cin>>year_now;

    cout<<"Ingrese el mes actual"<<endl;
    cin>>month_now;

    cout<<"Ingrese el dia actual"<<endl;
    cin>>day_now;

    /*Conversión a días*/

    bd_dias=(365*year_bd)+(30*month_bd)+day_bd;
    now_dias=(365*year_now)+(30*month_now)+day_now;
    edad=(now_dias-bd_dias)/365;

    cout<<"Usted tiene: "<<edad<<" anios"<<endl;
return 0;
}
