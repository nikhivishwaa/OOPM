#include<iostream>
using namespace std;

class Ebill{
    public:
    int units;
    string name;
    Ebill(){
        cout<<"Enter name & units by space: ";
        cin>>name>>units;
    }
};
class ebill_operations:public Ebill{
    public:
    float due;
    void getbill(){
        int temp;
        if(temp <= 100){
            due = units * 0.6;
            temp = 0;
        }
        if(temp > 100){
            due = 100 * 0.6;
            temp -= 100;
            if(temp <= 200){
                due += temp * 0.8;
                temp = 0;
            }
            else {
                due += 200 * 0.8;
                temp -= 200;
                due += temp * 0.92;
                temp = 0;
            }
        }
        if(due<50)due = 50.0;
        else if(due>300){
            due = due + (due*15/100);
        }
    }
    void generateBill(){
        getbill();
        cout<<"Name : "<<name<<"\tUnits Consumed : "<<units<<"\tBill : Rs "<<due<<endl;
    }
};

int main(){
    ebill_operations m1,m2,m3;
    cout<<endl;
    m1.generateBill();
    m2.generateBill();
    m3.generateBill();
    return 0;
}
