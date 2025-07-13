/* */

#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> v)
{
    cout << "elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> a;
    a.push_back(1);
    display(a);
    a[0] = 2;
    display(a);
    a.pop_back();
    display(a);

    vector<int> a1(5);
    cout<<a1.size()<<endl;
    display(a1);
    a1[0] = 9;
    display(a1);
    a1.insert(a1.end()-1, 108, 1);
    display(a1);

    vector<int> a2(5,3);
    cout<<a2.size()<<endl;
    display(a2);
    a2[0] = 9;
    display(a2);
    a2.insert(a2.end()-1, 108, 1);
    display(a2);

    vector<int> a3(a2);
    cout<<a3.size()<<endl;
    display(a3);
    a3[0] = 0;
    display(a3);
    a3.insert(a3.end()-1, 108, 1);
    display(a3);
    display(a2);

    vector<char> a4(10, 'A');
    cout<<a4.size()<<endl;
    display(a4);
    a4[5] = 'C';
    display(a4);
    a4.insert(a4.end()-1, 10, 'G');
    display(a4);
    return 0;
}