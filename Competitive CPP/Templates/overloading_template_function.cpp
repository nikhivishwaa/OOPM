    /* overloading template function & member f() template */

#include<iostream>
using namespace std;

// template <class T>
// class demo{
//     public:
//         T data;
//         demo(T data){
//             this->data = data;
//         }

//         void display(){
//             cout<<data<<endl;
//         }
// };

// int main(){
//     demo<int> d2(2);
//     d2.display();

//     demo<string> d3("sumit");
//     d3.display();
//     return 0;
// }
template <class T>
class demo{
    public:
        T data;
        demo(T data){
            this->data = data;
        }

        void display();
};

template <class T>
void demo<T> :: display(){
            cout<<data<<endl;
        }

int get_value(int x){
    cout<<"this is exact funtion"<<endl;
    return x;
}
template <class T1>
T1 get_value(T1 x){
    cout<<"this is template funtion"<<endl;
    return x;
}

int main(){
    demo<int> d2(2);
    d2.display();

    demo<string> d3("sumit");
    d3.display();

    // check overloading

    get_value(10); // run int get_value(int) bcz exact f() has more precidence
    get_value(12.65); // run T get_value(T)
    return 0;
}
