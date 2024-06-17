    /* function template */

#include<iostream>
using namespace std;

template <class T>
void swap_values(T &a, T &b){
    T c;
    c = a;
    a = b;
    b = c;
}

int main(){
    char x = 'a', y = 'b';
    cout<<"before swap: "<<x<<" "<<y<<endl;
    swap_values(x, y);
    cout<<"after swap: "<<x<<" "<<y<<endl;

    
    int p = 1000, q = 999;
    cout<<"before swap: "<<p<<" "<<q<<endl;
    swap_values(p, q);
    cout<<"after swap: "<<p<<" "<<q<<endl;
    return 0;
}