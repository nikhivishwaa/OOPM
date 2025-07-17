    /* */

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<char, int> data;
    data['g'] = 1253;
    data['k']= 412;
    data['z']= 346;
    data['A'] = 875;
cout<<"size: "<<sizeof(data)<<endl;
    for(pair<char, int> x:data)cout<<x.first<<" "<<x.second<<endl;
    return 0;
}