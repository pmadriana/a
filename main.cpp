#include <iostream>
using namespace std;

class punto{
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
    void suma(int a, int b){
        x += a;
        y += b;
    }

};
class vectorx
{
public:
    punto px1;
    punto px2;

    void suma(int a, int b){
        px1.suma(a,b);
        px2.suma(a,b);
    }
    void imprimir(){
        px1.print();
        px2.print();
    }

};

main(){
    punto p1(5,2);
    punto p2(6,7);
    vectorx vex;
    vex.px1=p1;
    vex.px2=p2;
    vex.imprimir();
    vex.suma(10,10);
    vex.imprimir();
}


