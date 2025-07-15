    /* */

#include<iostream>
#include<map>
using namespace std;

int main(){
    cout<<sizeof(map<string,int>)<<endl;    
    cout<<sizeof(map<double,int>)<<endl;    
    cout<<sizeof(map<int,int>)<<endl;    
    cout<<sizeof(map<char,int>)<<endl;
    
    map<string, string> data;
    data["name"] = "Ravi Kumar";
    data["city"] = "Indore";
    data["college"] = "Famous College";

    map<string, string>::iterator iter;
    for(iter = data.begin(); iter!=data.end(); iter++){
        cout<<iter->first<<" : "<<iter->second<<endl;
    }

    cout<<"College Name: "<<data["college"]<<endl;
    cout<<"size: "<<data.size()<<endl;
    return 0;
}