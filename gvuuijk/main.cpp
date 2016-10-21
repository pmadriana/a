#include <iostream>
#include <Punto.h>
#include <Vector.h>
using namespace std;

main(){
    Punto p1(5,2);
    Punto p3(p1);
    Punto p2(6,7);
    p3.print();
    p1.modifyPoint(3,3);
    p1.print();
    Vector vex;
    vex.px1=p1;
    vex.px2=p2;
    vex.imprimir();
}
