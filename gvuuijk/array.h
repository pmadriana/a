#ifndef ARRAY_H
#define ARRAY_H
#include "Punto.h"


using namespace std;

class PointArray{
private:
    Punto *points;
    int _size;
    void resize(const int x);
public:
    PointArray();
    PointArray(const Punto points[], const int size);
    PointArray(const PointArray &pv);
    ~PointArray();
    void print();
    void pushback(const Punto &p);
    void insert(const int pos, const Punto &p);
    void remove(const int pos);
    const int getsize() const ;
    void clear();
    void  getsize();
};



#endif // ARRAY_H
