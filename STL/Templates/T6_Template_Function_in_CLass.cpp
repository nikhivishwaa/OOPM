    /* */

#include<iostream>
using namespace std;

template <class T>
class Demo{
    public:
    T x;
    void shift(T);
};

template<class T>
void Demo<T>::shift(T a){
    cout<<"shift by "<<a<<" is "<<x+a<<endl;
}

int main(){
    Demo<int> a;
    a.x = 10;
    a.shift(a.x);
    Demo<double> b;
    b.x = 8.102;
    b.shift(2.103);
    return 0;
}