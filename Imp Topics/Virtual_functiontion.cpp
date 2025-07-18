/* */

#include <iostream>
using namespace std;

class demo
{
public:
    int x;
    virtual void print(){
        cout<<"I am a Printer"<<endl;
    }
};
class demo1 : public demo
{
public:
    int a;
    int a1;
};
class demo2
{
};
int main()
{

    cout << "Size of  demo: " << sizeof(demo) << endl;
    cout << "Size of  demo 1: " << sizeof(demo1) << endl;
    demo d1;
    
    return 0;
}