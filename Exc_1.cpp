// Write a program to create a class with name distance whose data maemders are feet and inch. Take data for 2 distance and print in proper format.
// Input: Enter Feet and Inches : 4 15
// Output: Distance = 5 Feet and 3 Inches

#include<iostream>
using namespace std;

class Distance
{
    public:
        int Inch, Feet;
        void getDistance(){
            cout<<"Enter Feet and Inches : ";
            cin>>Feet>>Inch;   
        }    
        void putDistance(){
            if(Inch>=12){
                Feet += Inch/12;
                Inch %= 12;
            }
            cout<<"Distance = "<<Feet<<" Feet and "<<Inch<<" Inches";   
        }    
};

int main(){
    Distance d1;
    d1.getDistance();
    d1.putDistance();    
    return 0;
}