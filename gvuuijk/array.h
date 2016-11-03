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
    PointArray(const Punto points[], const int _size);
    PointArray(const PointArray &p);
    ~PointArray();
    void print();
    void pushback(const Punto &p);
    void insert(const int pos, const Punto &p);
    void remove(const int pos);
    int getsize();
    void clear();

    const Punto get(const int) const;
    Punto get(const int);
};



#endif // ARRAY_H
