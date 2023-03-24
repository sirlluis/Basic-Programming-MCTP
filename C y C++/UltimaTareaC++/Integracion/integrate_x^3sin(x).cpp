//x1 y x2 son los limites de integracion. x[] abscisas, w[] pesos, numero de puntos de integracion.
// Numerical recipies for c++

#include <iostream>
#include <math.h>
using namespace std;


#define EPS 3.0e-11

void gauleg(double x1, double x2, double x[], double w[], int n)
{
  int m,j,i;
  double z1,z,xm,xl,pp,p3,p2,p1; 
  double xt[n], wt[n];

  xm = 0.5*(x2+x1); 
  m = (n+1)/2; 
  xl = 0.5*(x2-x1);
  for (i=1;i<=m;i++)
  { 
  z = cos(3.141592654*(i-0.25)/(n+0.5));

  do {
  p1 = 1.0;
  p2 = 0.0;
  for (j=1;j<=n;j++) { 
  p3 = p2; 
  p2 = p1;
  p1 = ((2.0*j-1.0)*z*p2-(j-1.0)*p3)/j;
  }

  pp = n*(z*p1-p2)/(z*z-1.0);
  z1 = z;
  z = z1-p1/pp; 
  } 

  while (fabs(z-z1) > EPS);
  xt[i] = xm-xl*z; 
  xt[n+1-i] = xm+xl*z; 
  wt[i] = 2.0*xl/((1.0-z*z)*pp*pp); 
  wt[n+1-i] = wt[i];
  }
  for(i = 1; i<=n;i++){
  x[i-1] = xt[i];
  w[i-1] = wt[i];} 
    
}


int main()
{

  double x1,x2, integracion;
  int n=100;
  double x[n], w[n];

  
  for(int i = 0; i < n; ++i){
    x[i] = 0.0;
    w[i] = 0.0;
    }
    
   gauleg(0.001, 1.0,x,w,n);  
   
   integracion = 0;
   //aquí modificamos la integral que queramos
   //integrate x^2 sin(x) from 0.001 to 1
   for(int j = 0; j<n ; ++j){
      integracion = integracion + w[j]*pow(x[j],3)*sin(x[j]);
      }
  
 cout << "la integracion es " << integracion << endl;
 return 0;
 
 
 }
    
