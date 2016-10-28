#include <iostream>
#include "Punto.h"
#include "array.h"
#include "Vector.h"
int main()
{
    Punto pt1(1,2);
    Punto pt2(3,4);
    Punto pt3(5,6);
    Punto array[]=(pt1,pt2);
    PointArray lista(array,2);
    lista.print();
    PointArray listcopia(lista);
    listcopia.print();
    lista.pushback(pt3);
    lista.print();
    lista.getsize();
    lista.clear();
    lista.print();
    lista.getsize();
}
