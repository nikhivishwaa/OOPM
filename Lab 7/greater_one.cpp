    /* */

#include<iostream>
using namespace std;

class num2;
class num1{
    public:
        int x;
        friend void larger(num1&, num2&);
};
class num2{
    public:
        int x;
        friend void larger(num1&, num2&);
};

void larger(num1 &a, num2 &b){
    if(a.x > b.x)cout<<a.x<<" is larger"<<endl;
    else cout<<b.x<<" is larger"<<endl;
}

int main(){
    num1 first;
    num2 second;
    cout<<"Enter First no. : ";
    cin>>first.x;
    cout<<"Enter Second no. : ";
    cin>>second.x;
    cout<<endl;
    larger(first, second);
    return 0;
}