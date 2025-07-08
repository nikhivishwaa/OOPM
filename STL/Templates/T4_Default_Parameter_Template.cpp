/* */

#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class s3 = char>
class demo
{
public:
    T1 a;
    T2 b;
    s3 c;
    demo(T1 x, T2 y, s3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void show()
    {
        cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    }
};

int main()
{
    demo<> obj1(10, 20.5, 'A');
    obj1.show();
    cout<<endl;
    demo<char, char, char> obj2('A', 'B', 'A');
    obj2.show();
    return 0;
}