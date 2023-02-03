#include <iostream>
#include <string>
using namespace std;
int main ()
{
    float a,b,c,d,e,f, resultado;
    std::cout << "Escriba un número a: " << std::endl;
    std::cin >> a;
    std::cout << "Escriba un número b: " << std::endl;
    std::cin >> b;
    std::cout << "Escriba un número c: " << std::endl;
    std::cin >> c;
    std::cout << "Escriba un número d: " << std::endl;
    std::cin >> d;
    std::cout << "Escriba un número e: " << std::endl;
    std::cin >> e;
    std::cout << "Escriba un número f: " << std::endl;
    std::cin >> f;
    cout<<endl;
    resultado=(a+(b/c)/(d+(e/f)));
    cout<<"(a+(b/c)/(d+(e/f)))= "<<resultado;
  return 0;
}
