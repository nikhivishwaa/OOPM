#include<iostream>
using namespace std;

void leap_year(int a){
    if(a%4==0){
        if(a%400==0)cout<<a<<" is Leap Year"<<endl;
        else if(a%100>0)cout<<a<<" is Leap Year"<<endl;
        else cout<<a<<" is Non-Leap Year"<<endl;
    }
    else cout<<a<<" is Non-Leap Year"<<endl;
}


int main(){
    int y;
    cout<<"Enter year to check leap year : ";
    cin>>y;
    leap_year(y);
    return 0;
}