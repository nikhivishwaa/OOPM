/* */

#include <iostream>
using namespace std;

template <class T>
class Vector
{
public:
    T *arr;
    int size;
    Vector(int n)
    {
        size = n;
        arr = new T[n];
    }
    void fill(T x)
    {
        for (int i = 0; i < size; i++)
            arr[i] = x;
    }
    void insert(int idx, T value)
    {
        arr[idx] = value;
    }
    void display(int start = 0, int end = -1, int step = 1)
    {
        end = (end == -1 || end > size) ? size : end;
        for (int i = start; i < end; i += step)
        {
            cout << "[" << i << "] : " << arr[i] << "\t";
        }
    }
};

int main()
{
    Vector<int> v(5);
    cout << "sizeof(Vector) : " << sizeof(Vector<int>) << endl;
    cout << "sizeof(v.arr) : " << sizeof(v.arr) << endl;
    cout << "Initial array: ";
    v.display();
    cout << "\nInitializing array with zero: ";
    v.fill(0);
    v.display();
    v.insert(2, 154);
    cout << "\nAfter inserting 154 at index 2: ";
    v.display();
    cout << "\n\n";
    Vector<float> v1(5);
    cout << "sizeof(Vector) : " << sizeof(Vector<float>) << endl;
    cout << "sizeof(v1.arr) : " << sizeof(v1.arr) << endl;
    cout << "Initial array: ";
    v1.display();
    cout << "\nInitializing array with 0.59: ";
    v1.fill(0.59);
    v1.display();
    v1.insert(4, 15.4);
    cout << "\nAfter inserting 15.4 at index 4: ";
    v1.display();
    return 0;
}