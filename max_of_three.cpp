#include<iostream>
using namespace std;

int max_of_three(int a=1,int b=2,int c=1){
    if(a>=b && a>=c)return a;
    else if(a<=b && b>=c)return b;
    else if(c>=b && a<=c)return c;
}

int main(){
    int x,y,z;
    cout<<"Enter no. 1 : ";
    cin>>x;
    cout<<"Enter no. 2 : ";
    cin>>y;
    cout<<"Enter no. 3 : ";
    cin>>z;
    int max_num = max_of_three(x,y,z);
    cout<<"\nMaximum no. is "<<max_num<<endl;
    return 0;
}