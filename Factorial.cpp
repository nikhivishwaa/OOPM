#include<iostream>
using namespace std;

int factorial(int a){
    if(a==0 || a==1) return 1;
    else return a * factorial(a-1);
}

int main(){
    int n;
    cout<<"Enter a no. calculate n! : ";
    cin>>n;
    int value = factorial(n);
    cout<<"\nValue of "<<n<<"! : "<<value<<endl;
    return 0;
}