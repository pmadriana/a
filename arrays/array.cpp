#include <iostream>
#include "array.h"
#include "Punto.h"

using namespace std;

void PointArray::resize(const int x);
{
    Punto *p= new Punto[x];
    this->_size=x;
    int i;
    for(i=0; i<x; i++)
        p[i]=points[i];
    delete[] points;
    points=p;
}
PointArray::PointArray(){ //default
    this->points=new Punto[0];
    this->_size=0;
}
PointArray::PointArray(const Punto pts, const int sz) //se crea el arreglo
{
        _size=sz;
        Point=new Point[sz];
        int i;
        for(i=0; i<sz, i++){
            points[i]=pts[i]
        }
}
PointArray::PointArray(const PointArray &p) //arreglo copia
{
    _size=p._size;
    points=new Punto[size];
    int i;
    for(i=0; i<_size; i++)
        points[i]=p.points[i];
}
PointArray::~PointArray()
{
    delete[] points;
}
void PointArray::print()
{
    int i;
    for(i=0; i<_size; i++)
        points[i].print();
}
void PointArray:pushback(Punto &p) //insertar al final
{
    resize(_size+1);
    points[_size-1]=p;
}
void PointArray::remove(int pos)
{
    int i;
    for(i=pos; i<_size;i++)
        points[i]=points[i+1];
    resize(_size-1);
}
void PointArray::clear()
{
    Punto p(0,0);
    for(i=0; i< _size; i++)
    points[i]=p;
    tam=0;
    delete[] points;
}
int PointArray::getsize()
{
    cout<<"El tamaño es: "<< _size;
}
