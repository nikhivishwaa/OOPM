#include<iostream>
using namespace std;

class A{
    public:
        void add(){
            cout<<"Add: ";
    }
};
class B:virtual public A{
    public:
        void sub(){
            cout<<"Sub: ";
        }
};
class C:virtual public A{
    public:
        void product(){
            cout<<"Product: ";
        }
};
class D:public B, public C{
    public:
        void divide(){
            cout<<"Divide: ";
        }
};

int main(){
    D d1;
    d1.add();
    d1.sub();
    d1.product();
    d1.divide();    
    return 0;
}

// using scope resolution operator

// class A{
//     public:
//         void add(){
//             cout<<"Add: ";
//     }
// };
// class B:public A{
//     public:
//         void sub(){
//             cout<<"Sub: ";
//         }
// };
// class C:public A{
//     public:
//         void product(){
//             cout<<"Product: ";
//         }
// };
// class D:public B, public C{
//     public:
//         void divide(){
//             cout<<"Divide: ";
//         }
// };

// int main(){
//     D d1;
//     d1.B::add();
//     d1.C::add();
//     // d1.A::add(); // not working
    
//     return 0;
// }