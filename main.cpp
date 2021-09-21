/*-------------------------------------------------------
 * Dato de Entrada : seg (unsigned long int)
 * Dato de Salida : h,m,s (unsigned long int)
 ------------------------------------------------------*/

#include <iostream>
#include <cmath>
#include "UFunciones.h"

using namespace std;


int main()
{
 unsigned int seg,h=0,m=0,s=0;

  do {
    cout << "Segundos :";
    cin >> seg;
  }while(seg<=1);
  convertir(seg, h, m, s);
  cout << "Horas : " << h << "\n";
  cout << "Minutos : " << m << "\n";
  cout << "Segundos : " << s << "\n";
  return 0;
}

