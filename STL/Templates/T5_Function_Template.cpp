/* */

#include <iostream>
using namespace std;

void swapper(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
    cout << "swapper(int &a, int &b): " << endl;
}

template <class T>
void swapper(T &a, T &b)
{
    T c = a;
    a = b;
    b = c;
    cout << "swapper(T &a, T &b): " << endl;
}

int main()
{
    int x = 9, y = 2;
    cout << x << " " << y << endl;
    swapper(x, y);
    cout << x << " " << y << endl;

    float x1 = 18.02, y1 = 23.54;
    cout << x1 << " " << y1 << endl;
    swapper(x1, y1);
    cout << x1 << " " << y1 << endl;

    char *x2 = "hi bro", *y2 = "check this";
    cout << x2 << " " << y2 << endl;
    swapper(x2, y2);
    cout << x2 << " " << y2 << endl;

    float *x3 = &x1, *y3 = &y1;
    cout << *x3 << " " << *y3 << endl;
    swapper(x3, y3);
    cout << *x3 << " " << *y3 << endl;
    return 0;
}