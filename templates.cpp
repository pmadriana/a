#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T temp(T x, T y)
{
    if(x>y)
        return x;
    else
        return y;
}
template <typename T>
T templ(T x, T y)
{
    if(x>y)
        return y;
    return x;

}
main()
{
   int a=9, c;
   int b=8;
   c= temp(a,b);
   int x;
   x=templ(1,6);
   cout<<c<<"\n";
   cout<<x;
}
