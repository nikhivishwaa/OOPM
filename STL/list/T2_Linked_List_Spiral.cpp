/* */

#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l)
{
    list<int>::iterator itr;
    cout << "Elements: ";
    for (itr = l.begin(); itr != l.end(); itr++)
        cout << *itr << " ";
    cout << endl;
}

int main()
{
    list<int> l1, l2;
    int n, val;
    cout << "Enter no. of Elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element (" << i << "): ";
        cin >> val;
        l1.push_back(val);
    }
    cout << l1.size() << endl;
    if (l1.size()>2)
    {
        list<int>::iterator iter = l1.begin(), rhs;
        int limit = l1.size() / 2;
        cout << "limit: " << limit << endl;
        display(l1);
        for (int i = 0; i < limit; i++)
        {
            iter++;
        }
        rhs = iter;
        l2.push_back(*iter);
        rhs++;
        l2.push_back(*rhs);
        iter--;
        rhs++;
        int start_visited = 0;
        for(int i=0; i<limit; i++)
        {
            if (rhs != l1.end())
            {
                l2.push_back(*rhs);
                // l1.remove(*rhs);
                rhs++;
            }
            if (l1.size() > 2 && *iter)
            {
                if (iter == l1.begin() && !start_visited)
                {
                    l2.push_back(*iter);
                    start_visited = 1;
                }
                else if (iter != l1.begin())
                {
                    l2.push_back(*iter);
                    // l1.remove(*iter);
                    iter--;
                }
            }
        }
    }
    display(l1);
    // l1.remove(*iter);
    // l1.insert()
    display(l2);

    return 0;
}