/* */

#include <iostream>
using namespace std;

class Swapper
{
public:
    int c;
    int &x = c;
    Swapper()
    {
        x = 5;
        cout << endl
             << c << endl;
    }
    void swap(int &a, int &b)
    {
        c = a;
        a = b;
        b = c;
        cout << sizeof(a) << " " << sizeof(b) << endl;
    }
};

int main()
{
    cout << sizeof(Swapper);
    Swapper s1;
    cout << sizeof(Swapper) << endl;
    cout << sizeof(s1.c) << " " << sizeof(s1.x);
    printf("\n\n &c: %u\n &x: %u\n &s1: %u", &s1.c, &s1.x, &s1);
    return 0;
}