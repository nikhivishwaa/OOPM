    /* */

#include<iostream>
#include<map>
using namespace std;

int main(){
    map<char, int> a;
    a['a'] = 5;
    a['b'] = 9;
    a['d'] = 4;
    a['g'] = a['d'] - a['a'];
    
    a.insert(pair<char, int>('c',125));

    for(pair<char, int>x : a){
        cout<<x.first<<" : "<<x.second<<endl;
    }
    cout<<endl;
    
    map<char, int> b(a);
    for(pair<char, int>x : b){
        cout<<x.first<<" : "<<x.second<<endl;
    }
    cout<<endl;

    map<char, int> c(a.begin(), ----a.end());
    for(pair<char, int>x : c){
        cout<<x.first<<" : "<<x.second<<endl;
    }
    cout<<endl;

    map<char, int> d = {{'A',1},{'Z',26},{'D',4}};
    for(pair<char, int>x : d){
        cout<<x.first<<" : "<<x.second<<endl;
    }
    cout<<endl;
    return 0;
}