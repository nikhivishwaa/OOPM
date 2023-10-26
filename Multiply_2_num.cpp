#include<iostream>
using namespace std;

int multiply_2_num(int a, int b){
    return a*b;
}

int main(){
    int a,b;
    cout<<"Enter two no. : ";
    cin>>a>>b;
    int p = multiply_2_num(a,b);
    cout<<"Product is : "<<p<<endl;
    return 0;
}