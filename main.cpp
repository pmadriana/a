#include <iostream>
#include <cmath>
using namespace std;
class Punto
{
    int x, y;
public:
    Punto(int a=0, int b=0){x=a; y=b;}
    void print(){
    cout<< "{" << x << "," << y << "}" << endl;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    int setX(const int a){return x=a;}
    int setY(const int b){return x=b;}
};

class PointArray
{
    int size ;
    Punto *points ;
    void resize(int newSize)
    {
        Punto *pts = new Punto[newSize];
        int minSize = ( newSize > size ? size : newSize );
        for (int i = 0; i < minSize ; i++)
            pts[i] = points[i];
        delete[] points ;
        size = newSize ;
        points = pts ;
    }
public :
    PointArray()
    {
        size = 0;
        points = new Punto[0];
    }
    PointArray(const Punto ptsToCopy [], const int toCopySize)
    {
        size = toCopySize;
        points = new Punto[toCopySize];
        for(int i = 0; i < toCopySize ; ++i)
            points[i] = ptsToCopy[i];
    }
    PointArray(const PointArray &p)
    {
        size = p.size;
        points = new Punto[size];
        for (int i = 0; i < size ; i++)
            points[i] = p.points [i];
    }
    ~PointArray()
    {
        delete[] points;
    }
    void clear()
    {
        resize(0);
    }
    int getSize()
    {
        return size;
    }

};

class poligono{
    PointArray *points;
    static int n; //numero poligonos(cont)
public :
poligono( const PointArray &pa);
poligono( const Punto points [], const int nPuntos ); //a partir de un arreglo y el num de puntos
virtual double area () const = 0;
static int getN(){ return n; } //regresa la cantidad de poligonos
int getNumL(){
    return points.getSize();
}//numero de lados
const PointArray *getPoints() { return &points ;} //regresa los puntos usados
~ poligono () {-- n;} //destructor
};

int poligono::m = 0;
poligono :: poligono ( const PointArray &pa) : points (pa) {
++ n;  //aumenta el cont
}
poligono:: poligono( const Punto pointArr [], const int nPuntos ) :
points ( pointArr , nPuntos ) {
++ n ;
}

class Rectangulo : public poligono {
public :
Rectangulo ( const Punto &a, const Punto &b); //crea a partir de 2 puntos
Rectangulo ( const int a, const int b, const int c, const int d); //a partir de 4 puntos
virtual double area () const ;
};

Punto constructorPts [4];

Punto *COnstructorPts ( const Punto &p1, const Punto &p2, const Punto &p3 , const Punto &p4 = Punto(0 ,0)) {
constructorPts [0] = p1;
constructorPts [1] = p2;
constructorPts [2] = p3;
constructorPts [3] = p4;
return constructorPts ; //iguala los 4 puntos a 00
}
Rectangulo :: Rectangulo ( const int llx , const int lly , const int urx ,const int ury) : poligono(COnstructorPts ( Punto(llx , lly), Punto(llx ,ury),Punto(urx , ury), Punto(urx ,lly)), 4) {}
//recibe 4 puntos, llama al constructor poligono que recibe un arreglo y el num de pts
double Rectangulo :: area (){
int ancho = p1.getX() - p2.getX();
int alto = p1.getY() - p2.getY();
return abs(ancho * alto );
}
class Triangulo : public poligono {
public :
    Triangulo ( const Punto &a, const Punto &b, const Punto &c);
    virtual double area () const ;
};
//
Triangulo :: Triangulo ( const Punto &a, const Punto &b, const Punto &c): poligono ( COnstructorPts (a, b, c), 3) {}

