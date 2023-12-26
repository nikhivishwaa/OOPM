#include<iostream>
using namespace std;

class demo{
    public:
    inline int cube(int x){
        cout<<x*x*x<<endl;
        return 0;
    }
};


int main(){
    demo d1;
    d1.cube(5);
    return 0;
}
