//
// Created by MARIA HILDA BERMEJO RIOS on 9/21/21.
//

#include "UFunciones.h"


void convertir(unsigned int seg, unsigned int & h, unsigned int & m, unsigned int & s)
{
  h = seg / 3600;
  seg = seg % 3600;
  m = seg /60;
  s = seg %60;
}