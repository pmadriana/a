#include <iostream>

using namespace std;
class Punto{
public:
    int x;
    int y;

    punto(){
        x=0;
        y=0;
    }
    punto(int w, int z){
        x=w;
        y=z;
    }
    void print(){
        cout<< x << " " << y << endl;

    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
    int setx(int i){
        x=i;
    }
    int sety(int j){
        y=j;
    }
    void modifyPoint(int a, int b){
        x += a;
        y += b;
    }

};
class Vector
{
public:
    punto px1;
    punto px2;

    void imprimir(){
        px1.print();
        px2.print();
    }
    void suma(int a, int b){
        px1.suma(a,b);
        px2.suma(a,b);

};

main(){
    Punto p1(5,2);
    Punto p2(6,7);
    Vector vex;
    vex.px1=p1;
    vex.px2=p2;
    vex.imprimir();

}

