#include "Punto.h"
#include <iostream>
using namespace std;

Punto::Punto() : x(0), y(0){}
Punto::Punto(int a, int b): x(a), y(b) {}

Punto::Punto(Punto &o){
    x=o.x;
    y=o.y;
}
void Punto:: print(){
        cout<< x << " " << y << endl;
}
int Punto::getx(){
    return x;
}
int Punto::gety(){
    return y;
}
int Punto::setx(int a){
    x=a;
}
int Punto::sety(int b){
    y=b;
}
void Punto::modifyPoint(int a, int b){
    x += a;
    y += b;
}

