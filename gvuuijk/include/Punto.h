#ifndef PUNTO_H
#define PUNTO_H

using namespace std;
class Punto{
public:
    int x;
    int y;

    Punto();
    Punto(int , int );
    Punto(Punto &o );
    void print();
    int getx();
    int gety();
    int setx(int );
    int sety(int );
    void modifyPoint(int , int );


};

#endif // PUNTO_H
