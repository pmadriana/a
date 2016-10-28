#include "Vector.h"
#include <iostream>
#include <Punto.h>
using namespace std;

Vector::Vector(){
    px1= Punto();
    px2= Punto();
}
void Vector::imprimir(){
    px1.print();
    px2.print();
}
