#include <iostream>
#include <vector>


using namespace std;
template<class T>
class Stack{
    vector <T> e;
public:
    bool Empty(){
        if(e.empty())
        return true;
    return false;
    }
    void push(const T &item){
        e.push_back(item);
    }
    T top(){
        return e.back();
    }
    void pop(){
        int len= e.size();
        if(len==0)
            cout<<"Esta vacia";
        else
            e.pop_back();}
};

int main(){
    Stack <int> p;
    p.Empty();
    p.pop();
    for (int i=1; i <= 10; i++)
    p.push(i);
    p.pop();
    cout<<"\n"<<"Cantidad de elementos: "<<p.top();
}
