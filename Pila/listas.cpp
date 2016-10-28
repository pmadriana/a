#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <list>
using namespace std;

main()
{
    list <string> alumnos;
    alumnos.push_back("Juan");
    alumnos.push_back("Maria");
    alumnos.push_back("Camila");
    alumnos.push_back("Jose");
    alumnos.push_back("Juan");
    alumnos.push_back("Micaela");
    int i=1;
    cout<<"El tamanio de la lista es: "<<alumnos.size();
    cout<<"\n";
    alumnos.remove("Micaela");
    cout<<"El nuevo tamanio de  la lista es: "<<alumnos.size();
    cout<<"\n";
    cout<<"La lista es: ";
    while(!alumnos.empty()){
        cout<<" "<<alumnos.front();
        alumnos.pop_front();
        i++;
    }
}

