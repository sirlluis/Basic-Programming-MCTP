#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string name;
    float practicas, teoria, participacion,total;
    std::cout << "Nombre del alumno: " << std::endl;
    std::cin >> name;
    std::cout << "Ingrese las calificaciones de 0-100 pts." << std::endl;
    std::cout << "Puntaje en prácticas (60%): " << std::endl;
    std::cin >> practicas;
    std::cout << "Puntaje en teoría (30%):  " << std::endl;
    std::cin >> teoria;
    std::cout << "Puntaje en participación (10%):  " << std::endl;
    std::cin >> participacion;
    total=(practicas*0.6+teoria*0.3+participacion*0.1)/10;
    cout<<endl;
    std::cout << "La calificación final de "<<name<<" es: " <<total <<"/10"<< std::endl;
  return 0;
}
