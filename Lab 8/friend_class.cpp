#include<iostream>
using namespace std;

class basket;
class fruit{
    public:
        char ch;
        int num;
        friend class basket;
};
class basket{
    public:
        void getdata(fruit &o1){
            cout<<"Enter value of ch and num : ";
            cin>>o1.ch>>o1.num;
        }
        void displaydata(fruit &o1){
            cout<<"ch : "<<o1.ch<<endl;
            cout<<"num : "<<o1.num<<endl;
        }
};

int main(){
    fruit f1;
    basket b1;
    b1.getdata(f1);
    b1.displaydata(f1);
    return 0;
}