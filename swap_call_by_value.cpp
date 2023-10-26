#include<iostream>
using namespace std;

class test
{
    public:
    void swap(int x, int y){
        int z = x;
        x = y;
        y = z;
        cout<<"value of x: "<<x<<endl;
        cout<<"value of y: "<<y<<endl;
    }
};

int main(){
    int a, b;
    cout<<"enter value of a: ";
    cin>>a;
    cout<<"enter value of b: ";
    cin>>b;
    test t1;
    t1.swap(a,b);
    cout<<"After swaping: "<<endl;
    cout<<"value of a: "<<a<<endl;
    cout<<"value of b: "<<b<<endl;
    cout<<(sizeof(a));
    return 0;
}