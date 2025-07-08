/* */

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    char ch;
    void hello()
    {
        cout << "Hello from Node!" << endl;
    }
};
int main()
{
    cout<<sizeof(Node) << endl;
    return 0;
}