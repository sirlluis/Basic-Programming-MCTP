/*09/02/2023*/
/*by Luis Gerardo Ramirez Archundia*/

/*Un year biciesto es aquel que es divisible entre 4, es decir el residuo es cero.
los years que marcan el inicio de siglo, por ejemplo: 1800, 1900, 2000 son biciestos*/
#include <iostream>

using namespace std;

int main()
{
    int year;
    cout<<"Ingrese el year que desea saber: ";
    std::cin >>year ;
    /*Primero probamos que sea un year de inicio de siglo, entonces debe cumplir las dos condiciones*/
    if(year%4==0 and year%100==0 ){
        std::cout <<year<<  " es un year biciesto." << std::endl;
    }
    /*Si no es un year de inicio de siglo entonces comprobamos que no lo sea, efectivamente 
    y que además sea divisibleentre 4*/
    if(year%4==0 and year%100!=0){
        std::cout << year <<" es un year biciesto" << std::endl;
    }
    else{
        std::cout <<year << " no es un year biciesto" << std::endl;
    }

    return 0;
}
