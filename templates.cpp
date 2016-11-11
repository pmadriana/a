#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class Stack
{
private:
    vector <T> pila;
public:
    bool empty()
    {
        if (pila.empty()){
            cout << "El stack esta vacio\n";
            return true;}
        else
            cout << "El stack no esta vacio\n";
            return false;
    }
    void push(const T &element)
    {
        cout << "Se inserto el elemento: "<< element << "\n";
        pila.push_back(element);
    }
    T top()
    {
        cout << "El primer elemento es: ";
        return pila.back();
    }
    void pop()
    {
        if(pila.empty())
            cout<<"Esta vacio el stack";
        else
            pila.pop_back();
    }
};
template <typename T>
T Min(T a, T b)
{
    if(a>b)
        return a;
    else
        return b;
}
template <typename T>
T Min2(T a, T b)
{
    return (a>b)?a:b;
}
main()
{
    /*int x = Min(1,2);
    int y = Min2(3,4);
    cout << x << " " << y;*/
    Stack <int> s;
    s.empty();
    s.push(1);
    s.empty();
    cout << s.top()<<"\n";
    s.push(2);
    s.push(3);
    s.push(4);
    cout << s.top()<<"\n";


}

