    /* */

#include<iostream>
#include<vector>
using namespace std;

template <class T>
void print(vector<T> &vec){
    cout<<"vector: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;    
}
int main(){
    vector<int> vec1; // zero length vector
    vector<char> vec2(4); // 4 elements char verctor
    vector<char> vec3(vec2); // 4 elements char verctor from vec2
    vector<int> vec4(6, 3); // 6 element verctor of 3s

    print(vec1);
    print(vec2);
    print(vec3);
    print(vec4);

    
    // int size, element;
    // cout<<"Enter vector size: ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"vector element "<<i+1<<": ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }

    // print(vec1);
    

    vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter, 56);
    // print(vec1);
    
    // vec1.insert(iter+1, 99);
    // print(vec1);

    // vec1.insert(iter + 1, 100, 99); // insert 99 , 100 times at iter + 1 reference
    // print(vec1);
    return 0;
}