#include "Punto.h"
#include <iostream>
using namespace std;

Punto::Punto() : x(0), y(0){}
Punto::Punto(int w, int z): x(w), y(z) {}

Punto::Punto(Punto&o){
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
int Punto::setx(int i){
    x=i;
}
int Punto::sety(int i){
    y=i;
}
void Punto::modifyPoint(int a, int b){
    x += a;
    y += b;
}
