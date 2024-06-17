    /* default parameter template*/

#include<iostream>
using namespace std;

template <class T1 = int, class T2 = char, class T3 = float>
class myclass{
    public:

        T1 data1;
        T2 data2;
        T3 data3;
        myclass(T1 a, T2 b, T3 c){
            data1 = a;
            data2 = b;
            data3 = c;
            print();
        }

        void print(){
            cout << endl << data1 << " " << data2 << " " << data3 << endl;
        }
};
int main(){
    myclass<> obj3(15,'k',12.65);
    
    myclass<char,int,float> obj4('s',16,45.6987);
    
    myclass<char,int> obj5('s',18,85.6987);
    
    myclass<char,char> obj6('s','g',45.6987);

    return 0;
}