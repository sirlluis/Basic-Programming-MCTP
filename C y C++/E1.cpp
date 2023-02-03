#include <iostream>
#include <string>
using namespace std;
int
main ()
{
  string name;
  int age;
  char sexo;
  float height;


  cout << "Escriba su nombre:  ";
  cin >> name;
  cout << "Escriba su edad: ";
  cin >> age;
  cout << "Género M/F: ";
  cin >> sexo;
  cout << "Altura[m]: ";
  cin >> height;
  cout << endl;

  cout << "Bienvenido " << name << endl;
  cout << age << " años" << endl;
  cout << sexo << endl;
  cout << height << " m.";
  return 0;
}
