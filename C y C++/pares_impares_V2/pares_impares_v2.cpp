//Escribir un programa usando vectores que pida al usuario N valores. Dividir los valores del usuario en
//dos vectores, en el primero almacenar pares y en el segundo impares. Imprimir resultado en la terminal
//y exportar la salida a un archivo de texto usando ofstream.

//by Luis Gerardo Ramirez Archundia
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void dataTotxt(vector<int> dataPar, vector<int> dataImpar)
//función para exportar los dos vectores en dos archivos txt
{
    //Exportamos el vector de pares
    ofstream archivo_pares("pares.txt");
    if (archivo_pares.is_open())
    {
        for (auto i=dataPar.begin(); i!=dataPar.end() ;i++ )
        {
            archivo_pares<<*i<<endl;
        }
    }
    else{
        cout<<endl<<"No se pudo abrir el archivo para escritura :("<<endl;
    }
    //cerramos el archivo
    archivo_pares.close();
    cout<<endl<<"El archivo de pares se exporto correctamente!"<<endl;
    //Exportamos el vector con los impares
    ofstream archivo_impares("impares.txt");
    if(archivo_impares.is_open())
    {
        for(auto i=dataImpar.begin(); i!=dataImpar.end();i++)
        {
            archivo_impares<<*i<<endl;
        }
    }
    else{
        cout<<endl<<"No se pudo abrir el archivo para escritura :("<<endl;
    }
    //cerramos el archivo
    archivo_impares.close();
    cout<<endl<<"El archivo de impares se exporto correctamente!"<<endl;
}

void printVector(vector<int> datos)
//Esta funcion imprime las entradas de un vector en horizontal, no es necesario indicarle el tamaño del vector
{
    for (auto i = datos.begin(); i != datos.end(); ++i)//llamamos a los metodos begin() y end() porque no sabemos la longitud del vector resultante
    {
        cout << *i << " ";
    }
}

vector<int> splitPares(vector<int> someVector)
{
    vector<int> pares;
    for(int i=0; i<someVector.size(); i++)
    {
        if (someVector[i]%2==0)
        {
            pares.push_back(someVector[i]);
        }
    }
    return pares;
}

vector<int> splitImpares(vector<int> someVector)
{
    vector<int> impares;
    for(int i=0; i<someVector.size(); i++)
    {
        if (someVector[i]%2!=0)
        {
            impares.push_back(someVector[i]);
        }
    }
    return impares;
}
int main()
{
    int N;
    cout<<"Ingrese el numero de elementos que desa ingresar"<<endl;
    cin>>N;
    //Definimos el vector
    vector<int> numeros(N);
    for(int i; i<N; i++)
    {
        cout<<"Ingrese el elemento "<<i<<"/"<<N<<endl;
        cin>>numeros[i];
    }
    //Imprimimos el vector
    cout<<"El vector ingresado es: "<<endl;
    printVector(numeros);
    cout<<endl;

    //Creamos un menu para las opciones
    int menu=1;
    int selec;
    int indice;
    int element;
    while(menu==1)
    {
       cout<<endl<<"Desea ingresar al menu? yes(1)/no(2)"<<endl;
       cin>>menu;
       if(menu==1){
        cout<<"::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"Seleccione una opcion..."<<endl<<endl;
        cout<<"Agregar elemento al vector...(1)"<<endl;
        cout<<"Eliminar elemento del vector...(2)"<<endl;
        cout<<"Sustituir elemento del vector....(3)"<<endl;
        cout<<"Separar vector en pares e impares y exportar....(4)"<<endl;
        
        cout<<"::::::::::::::::::::::::::::::::::"<<endl;
        cin>>selec;
        switch (selec)
        {
            case 1:
                cout<<"Agregar elemento"<<endl;
                cout<<"Escriba el elemento que desea ingresar"<<endl;
                cin>>element;
                cout<<"El vector actualizado es..."<<endl;
                numeros.push_back(element); //aqui se agrega el elemento al vector
                printVector(numeros);
                break;
            case 2:
                
                cout<<"Seleccione el elemento a eliminar"<<endl;
                printVector(numeros);
                cout<<endl<<"Index"<<endl;
                //imprimimos el índice de las entradas del vector
                for(int i=0; i<numeros.size(); i++)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
                cin>>indice;
                numeros.erase(numeros.begin()+indice); //así se le indica la posición que debe eliminar, si solo pones un numero no funciona
                cout<<"El vector actualizado es"<<endl;
                printVector(numeros);
                break;
            case 3:
                cout<<"Ingrese la posicion del elemento que desea cambiar"<<endl;
                printVector(numeros);
                cout<<endl<<"Index"<<endl;
                //imprimimos el índice de las entradas del vector
                for(int i=0; i<numeros.size(); i++)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
                cin>>indice;
                cout<<"Ingrese el elemento que desea reemplazar"<<endl;
                cin>>element;
                numeros[indice]=element;
                cout<<"El vector actualizado es"<<endl;
                printVector(numeros);
                break;
            case 4:
                cout<<"Separacion de vector en pares e impares"<<endl<<endl;
                cout<<endl<<"Se han encontrado los siguientes elementos pares"<<endl;
                printVector(splitPares(numeros));
                cout<<endl<<"Se han encontrado los siguientes elementos impares"<<endl;
                printVector(splitImpares(numeros));
                dataTotxt(splitPares(numeros),splitImpares(numeros));
                
                break;
        }
       }
       if(menu==2) 
       {
        cout<<"Saliendo...."<<endl;
        break;
       }
    }
    //Llamamos a la funcion dataTotxt() para que exporte los datos a dos ficheros .txt
    //dataTotxt(pares,impares);
    
    return 0;
}
