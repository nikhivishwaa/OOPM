#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two no. for swaping: ";
    cin>>a>>b;
    cout<<"before swaping ->"<<"a : "<<a<<"\t"<<"b : "<<b<<endl;
    a+=b;
    b=a-b;
    a-=b;
    cout<<"after swaping ->"<<"a : "<<a<<"\t"<<"b : "<<b<<endl;
    return 0;
}
