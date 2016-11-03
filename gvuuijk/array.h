#ifndef Punto_h
#define Punto_h


using namespace std;
class Punto{

    int x;
    int y;
public:
    Punto();
    Punto(int , int );
    Punto(Punto &o );
    void print();
    int getx();
    int gety();
    int setx(int );
    int sety(int );
    void modifyPoint(int , int );
//

};


#endif // PUNTO_H
