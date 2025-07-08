/* */

#include <iostream>
using namespace std;

class Vector
{
public:
    int *arr;
    int arr_static[5] = {5, 4};
    int size;
    Vector(int n)
    {
        size = n;
        arr = new int[n];
    }
};

int main()
{
    Vector v(5);
    cout << "sizeof(Vector) : " << sizeof(Vector) << endl;
    cout << "sizeof(v.arr) : " << sizeof(v.arr) << endl;
    cout << "sizeof(v.arr_static) : " << sizeof(v.arr_static) << endl;
    cout << "v.arr[0] : " << v.arr[0] << endl;
    cout << "v.arr[1] : " << v.arr[1] << endl;
    cout << "v.arr[2] : " << v.arr[2] << endl;
    cout << "v.arr[3] : " << v.arr[3] << endl;
    cout << "v.arr[4] : " << v.arr[4] << endl;
    cout << "v.arr_static[0] : " << v.arr_static[0] << endl;
    cout << "v.arr_static[1] : " << v.arr_static[1] << endl;
    cout << "v.arr_static[2] : " << v.arr_static[2] << endl;
    cout << "v.arr_static[3] : " << v.arr_static[3] << endl;
    cout << "v.arr_static[4] : " << v.arr_static[4] << endl;
    v.arr[0] = 1;
    v.arr_static[0] = 1;
    cout << "v.arr[0] : " << v.arr[0] << endl;
    cout << "v.arr[1] : " << v.arr[1] << endl;
    cout << "v.arr[2] : " << v.arr[2] << endl;
    cout << "v.arr[3] : " << v.arr[3] << endl;
    cout << "v.arr[4] : " << v.arr[4] << endl;

    cout << "v.arr_static[0] : " << v.arr_static[0] << endl;
    cout << "v.arr_static[1] : " << v.arr_static[1] << endl;
    cout << "v.arr_static[2] : " << v.arr_static[2] << endl;
    cout << "v.arr_static[3] : " << v.arr_static[3] << endl;
    cout << "v.arr_static[4] : " << v.arr_static[4] << endl;
    return 0;
}