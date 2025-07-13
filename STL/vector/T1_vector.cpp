    /* */

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    int n, val;
    cout<<"Enter the No. of element: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the element: ";
        cin>>val;
        a.push_back(val);
    }
    cout<<"elements: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"elements by a.at(): ";
    for (int i = 0; i < n; i++)
    {
        cout<<a.at(i)<<" ";
    }
    
    return 0;
}