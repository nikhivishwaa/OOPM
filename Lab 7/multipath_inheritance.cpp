#include<iostream>
using namespace std;

class Base{
    public:
        int a;
};
class D1: virtual public Base{
    public:
        int b;
};
class D2: virtual public Base{
    public:
        int c;  
};
class D3: public D1, public D2{
    public:
        void total(){
            int x = a + b + c;
            cout<<"Total is: "<<x<<endl;
        }  
};

int main(){
    D3 obj1;
    cout<<"Enter value of a, b and c : ";
    cin>>obj1.a>>obj1.b>>obj1.c;
    obj1.total();
    return 0;
}