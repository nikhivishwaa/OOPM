/* */

#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> v)
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
    int n, val;
    cout << "Enter the No. of element: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element: ";
        cin >> val;
        a.push_back(val);
    }
    display(a);
    vector<int>::iterator itr = a.begin();
    a.insert(itr, 566);
    display(a);
    a.insert(a.end(), 566);
    display(a);
    a.insert(itr + 3, 567);
    display(a);
    a.insert(itr + 0, 9, 566);
    display(a);
    return 0;
}