#include<iostream>
using namespace std;

class Address{
    public:
    string colony, state, city;
    int hno;
    Address(int h, string col, string ct, string s){
        state = s;
        city = ct;
        colony = col;
        hno = h;
    }
};
class Person{
    public:
    string name;
    Address *p; // accessing  class data without inheritance
    void address(Address *ptr){
        p = ptr;
    }
    void getPerson(){
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<p->hno<<", "<<p->colony<<", "<<p->city<<", "<<p->state<<endl;
    }
};

int main(){
    Address add1(148, "Jayant nagar", "Sagar", "Madhya Pradesh");
    Person nikhil;
    nikhil.address(&add1);
    nikhil.name = "nikhil";
    nikhil.getPerson();
    return 0;
}
