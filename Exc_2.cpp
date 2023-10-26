// Write a program to create a class with name Time whose data members are Hour, Minute
// and Seconds. Take data for 2 times and print details.
// Input: Enter Time in H, M and S : 4 15 62
// Output: Time = 4 Hours : 16 Minutes : 2 Seconds

#include<iostream>
using namespace std;

class Time
{
    public:
        int Minutes, Hours, Seconds;
        void getTime(){
            cout<<"Enter Time in H, M and S : ";
            cin>>Hours>>Minutes>>Seconds;   
        }    
        void putTime(){
            if(Seconds>=60){
                Minutes += Seconds/60;
                Seconds %= 60;
            }
            if(Minutes>=60){
                Hours += Minutes/60;
                Minutes %= 60;
            }
            
            cout<<"Time = "<<Hours<<" Hours : "<<Minutes<<" Minutes : "<<Seconds<<" Seconds";   
        }    
};

int main(){
    Time d1;
    d1.getTime();
    d1.putTime();    
    return 0;
}