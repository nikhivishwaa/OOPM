/* */

#include <iostream>
#include <vector>
using namespace std;

class A{
    public:
    vector<int> v;
};

int main()
{
    vector<int> v(10, 2);
    int i=0, arr[10]={1,2,3};
    for (int &x : v)
    {
        x += i++;
        cout << x << endl;
    }
    for (int &y : v)
    {
        cout << y << endl;
    }
    cout<<"Size: "<<sizeof(A)<<endl;
    for (int &x : arr)
    {   cout << "arr: "<<x << endl;
    }
    return 0;
}