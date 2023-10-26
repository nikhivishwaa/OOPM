#include<iostream>
using namespace std;

void even_odd(int x){
    cout<<endl;
    if(x%2==0 && x>0)cout<<"No is Even"<<endl;
    else if(x%2>0)cout<<"No is Odd"<<endl;
    else cout<<"No is Zero"<<endl;}

int main(){
    int n;
    cout<<"Enter a no. to check no. is odd/even : ";
    cin>>n;
    even_odd(n);
    return 0;
}