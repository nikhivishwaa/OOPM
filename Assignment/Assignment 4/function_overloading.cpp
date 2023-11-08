#include<iostream>
using namespace std;

class Calculator{
    public:
        int add(int a, int b){
            return (a+b);
        }
        int add(int a, int b, int c){
            return (a+b+c);
        }
        double add(float a, float b, float c){
            return (a+b+c);
        }
};

int main(){
    Calculator obj1;
    cout<<"obj1.add(5, 9) : "<<obj1.add(5, 9)<<endl;
    cout<<"obj1.add(4, 3, 6) : "<<obj1.add(4, 3, 6)<<endl;
    cout<<"obj1.add(7.5, 9.2) : "<<obj1.add(7.5, 9.2)<<endl;
    return 0;
}