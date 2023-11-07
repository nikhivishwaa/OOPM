#include<iostream>
using namespace std;

class complex{
    public:
    int a, b;
    void setdata(int x, int y){
        a = x;
        b = y;
    }
    void getdata(){
        cout<<"a = "<<a<<"\tb = "<<b<<endl;
    }
    // int operator ++(){ // operator keyword to overload operator

    complex operator ++(){ // operator keyword to overload operator
        a++;b++;
        cout<<a;
        cout<<b;
    }
};

int main(){
    complex c1;
    c1.setdata(5,6);
    c1.getdata();
    // c1++;

    ++c1;

}