#include <iostream>
https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-096-introduction-to-c-january-iap-2011/assignments/MIT6_096IAP11_sol03.pdf
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
    Punto * points ;
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
    PointArray(const PointArray &other)
    {
        size = other.size;
        points = new Punto[size];
        for (int i = 0; i < size ; i++)
            points[i] = other.points [i];
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
    static int n;
public :
poligono ( const PointArray &pa);
poligono( const Punto points [], const int n );
virtual double area () const = 0;
static int getN () { return n ;}
int getNumL () const { return points . getSize () ;}
const PointArray * getPoints () const { return & points ;}
~ poligono () {-- n;}
};

int poligono::m = 0;
poligono :: poligono ( const PointArray &pa) : points (pa) {
++ n;
}
poligono:: poligono( const Punto pointArr [], const int numPoints ) :
points ( pointArr , numPoints ) {
++ n ;
}

class Rectangulo : public poligono {
public :
Rectangulo ( const Punto &a, const Punto &b);
Rectangulo ( const int a, const int b, const int c, const int d);
virtual double area () const ;
};



