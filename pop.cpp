#include<iostream>
using namespace std;

void area_of_Circle(){
    float r;
    cout<<"enter radius of Circle: ";
    cin>>r;
    cout<<"Area of circle is : "<<3.14*r*r<<" unit square"<<endl;
    }
void area_of_Rectangle(){
    float l,b;
    cout<<"Enter Length of Rectangle : ";
    cin>>l;
    cout<<"Enter Breadth of Rectangle : ";
    cin>>b;
    cout<<"Area of Rectangle is : "<<l*b<<" unit square"<<endl;}
void area_of_Triangle(){
    float a, b, c;
    cout<<"Enter side a : ";
    cin>>a;
    cout<<"Enter side b : ";
    cin>>b;
    cout<<"Enter side c : ";
    cin>>c;
    float s=(a+b+c)/2;
    float area = s*(s-a)*(s-b)*(s-c);
    cout<<"Area of Trianle is : "<< area<<" unit square"<<endl;
    }

int main(){
    int c;
    while(true){
        cout<<"Choose 1 Option from below to Calculate :\nArea of Circle (Press 1)\nArea of Rectangle (Press 2)\nArea of Triangle (Press 3)"<<endl;
        cout<<"\n\tEnter Your Choice : ";
        cin>>c;
        switch(c){
            case 1:
                area_of_Circle();
                break;
            case 2:
                area_of_Rectangle();
                break;
            case 3:
                area_of_Triangle();
                break;
            default:
                cout<<"Invalid Input... Try Again"<<endl;
                break;
        }
        cout<<"\n\tPress 'q' to exit or any of key to continue :";
        char feedback;
        cin>>feedback;
        if(feedback=='q')break;
}

    return 0;
}
