#include<iostream>
using namespace std;

class sample{
    public:
    void add(int x, int y){
        cout<<"\nx + y : "<<x+y;
    }
    void add(float x, float y){
        cout<<"\nx + y : "<<x+y;
    }
    void add(int x, int y, int z){
        cout<<"\nx + y + z : "<<x+y+z;
    }
    void add(int x, int y, int z, int w){
        cout<<"\nx + y + z + w : "<<x+y+z+w;
    }  
};

int main(){
    sample d1;
    d1.add(5,6);
    d1.add(5,6,9);
    d1.add(5,4,6,9);
    // d1.add(5.2,6.9);
    return 0;
}