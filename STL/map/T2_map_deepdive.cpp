    /* */

#include<iostream>
#include<map>
using namespace std;

int main(){
    
    map<int, string> data;
    data[1] = "Ravi Kumar";
    data[99] = "Indore";
    data[100] = "Famous College";

    map<int, string>::iterator iter;
    for(iter = data.begin(); iter!=data.end(); iter++){
        cout<<iter->first<<" : "<<iter->second<<endl;
    }

    cout<<"College Name: "<<data[100]<<endl;
    cout<<"size: "<<data.size()<<endl;
    return 0;
}