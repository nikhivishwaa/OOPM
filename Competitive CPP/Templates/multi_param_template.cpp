    /* comma separated multi parameter template*/

#include<iostream>
using namespace std;

template <class T1, class T2, class T3>
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
            cout << data1 << " " << data2 << " " << data3 << endl;
        }
};
int main(){
    myclass<int,int,char> obj1(15,16,'c');
    myclass<char,int,float> obj2('s',16,45.6987);
    myclass<int,char,char> obj3(15,'k','p');
    return 0;
}