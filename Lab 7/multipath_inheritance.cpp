    /* */

#include<iostream>
using namespace std;

class Base{
    public:
        int a;
};
class D1: public Base{
    public:
        int b;
};
class D2: public Base{
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
    
    return 0;
}