#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;
main()
{
    vector <int> a;
    a.push_back(8);
    a.push_back(7);
    a.push_back(2);
    a.push_back(5);
    a.push_back(3);
    a.insert(a.begin()+3,10);
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout<<"El tamano anterior era: "<<a.size()<<endl;
    a.resize(4);
    cout<<"El nuevo tamano es: "<<a.size()<<endl;
}
