#include <iostream>

using namespace std;
void sumarArreglos(float someArray1[], float someArray2[])
{
    float suma[5];
    for(int i=0;i<5;i++)
    {
        suma[i]=someArray1[i]+someArray2[2];
    }
    //imprimimos el arreglo
    for(int i=0;i<5;i++)
    {
        cout<<suma[i]<<" ";
    }

}
void restarArreglos(float someArray1[], float someArray2[])
{
    float resta[5];
    for(int i=0;i<5;i++)
    {
        resta[i]=someArray1[i]-someArray2[2];
    }
    //imprimimos el arreglo
    for(int i=0;i<5;i++)
    {
        cout<<resta[i]<<" ";
    }

}
void multbyConst(float someArray1[], float someArray2[], float constant)
{
    cout<<endl<<"El primer arreglo multiplicado por "<<constant<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<constant*someArray1[i]<<" ";
    }
    cout<<endl<<"El segundo arreglo multiplicado por "<<constant<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<constant*someArray2[i]<<" ";
    }
}

int main()
{
    //Declaramos los arreglos
    float arr1[5], arr2[5];
    //Llenamos los arreglos
    cout<<"Ingrese los valores del primer arreglo"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"Ingrese el valor "<<i<<"/"<<"5"<<endl;
        cin>>arr1[i];
    }

    cout<<"Ingrese los valores del segundo arreglo"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"Ingrese el valor "<<i<<"/"<<"5"<<endl;
        cin>>arr2[i];
    }
    cout<<"El primer arreglo es"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl<<"El segundo arreglo es"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<arr2[i]<<" ";
    }

    //creamos el menu
    int menu=1;
    int select;
    float constante;
    while (menu==1)
    {
        cout<<endl<<"Desea hacer algo con estos dos arreglos? yes(1)/no(2)"<<endl;
        cin>>menu;
        if(menu==1)
        {
            cout<<"Seleccione lo que desea hacer"<<endl<<endl;
            cout<<"Sumar los dos vectores.....(1)"<<endl;
            cout<<"Restar los dos vectores....(2)"<<endl;
            cout<<"Multiplicar por una constante.....(3)"<<endl;
            cin>>select;
            switch (select)
            {
            case 1:
                cout<<"La suma de los dos vectores es"<<endl;
                sumarArreglos(arr1,arr2);
                break;
            case 2:
                cout<<"La resta de los dos vectores es"<<endl;
                restarArreglos(arr1,arr2);
                break;
            case 3:
                cout<<"Proporcione la constante para multiplicar"<<endl;
                cin>>constante;
                 cout<<"Los dos vectores multiplicados por la constante son"<<endl;
                 multbyConst(arr1,arr2,constante);
                break;
            }
        }
        if(menu==2)
        {
            break;
        }
    }
    
    return 0;
}