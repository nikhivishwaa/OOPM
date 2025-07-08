/* */

#include <iostream>
using namespace std;

template <class T1, class T2, class T3>
class demo
{
public:
    T1 x;
    T2 y;
    T3 z;
    demo(T1 a, T2 b, T3 c) : x(a), y(b), z(c) {}
    void display()
    {
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "Z: " << z << endl;
    }
};
int main()
{
    demo<int, int, int> d1(10, 20, 30);
    d1.display();
    demo<int, char, int> d2(10, 'C', 30);
    d2.display();
    return 0;
}