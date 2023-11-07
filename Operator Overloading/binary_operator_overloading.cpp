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

    complex operator +(complex c){ 
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

int main(){
    complex c1, c2, c3;
    c1.setdata(2,4);
    c1.getdata();
    c2.setdata(5,6);
    c2.getdata();
    c3 = c1 + c2;
    c3.getdata();

}