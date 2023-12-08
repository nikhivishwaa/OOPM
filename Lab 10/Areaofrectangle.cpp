#include<iostream>
using namespace std;

class rectangle{
    public:
    void area_of_rectangle(int x, int y){
        cout<<"\nArea : "<<x*y<<" square unit";
    }
    void area_of_rectangle(double x, double y){
        cout<<"\nArea : "<<x*y<<" square unit";
    }
    void area_of_rectangle(int x, double y){
        cout<<"\nArea : "<<x*y<<" square unit";
    }
    void area_of_rectangle(double x, int y){
        cout<<"\nArea : "<<x*y<<" square unit";
    }
};

int main(){
    rectangle r1;
    r1.area_of_rectangle(5,6);
    r1.area_of_rectangle(4, 0.9);
    r1.area_of_rectangle(3.2, 5);
    r1.area_of_rectangle(4.1, 5.9);
    return 0;
}
