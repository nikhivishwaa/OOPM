#include<iostream>
using namespace std;

class demo{
    public:
    void show(){
        cout<<"\nAIDS\n";
    }
    void show(int x){
        cout<<"\nSISTec\n";
    }
};

int main(){
    demo d1;
    d1.show();
    d1.show(5);
    return 0;
}