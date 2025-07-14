/* */

#include <iostream>
#include <list>
using namespace std;

template <class T>
void display(list<T> l)
{
    cout << "Elements: ";
    for (T &x : l)
        cout << x << " ";
    cout << endl;
}

int main()
{
    cout << "size of -> list<int> : " << sizeof(list<int>) << endl;
    cout << "size of -> list<float> : " << sizeof(list<float>) << endl;
    cout << "size of -> list<char> : " << sizeof(list<char>) << endl;
    cout << "size of -> list<double> : " << sizeof(list<double>) << endl;

    list<int> l1;
    cout << l1.size() << endl;
    cout << l1.max_size() << endl;
    display(l1);
    l1.push_back(120);
    l1.push_front(160);
    l1.push_front(100);

    cout << l1.size() << endl;
    cout << l1.max_size() << endl;
    display(l1);
    l1.reverse();
    display(l1);
    l1.sort();
    display(l1);

    list<int> l2(l1);
    list<int>::iterator iter = ++l2.begin();
    display(l2);
    printf("iter: %u\n", iter._M_node);
    *iter = 5;
    l2.merge(l1);
    display(l2);
    iter++;
    printf("iter: %u\n", iter._M_node);
    iter++;
    printf("iter: %u\n", iter._M_node);
    iter++;
    printf("iter: %u\n", iter._M_node);
    (------iter);
    printf("iter: %u\n", iter._M_node);
    (iter++++++);
    printf("iter: %u\n", iter._M_node);
    *iter = 99;
    display(l2);
    return 0;
}