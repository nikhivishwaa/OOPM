// #include <iostream>
// using namespace std;

// class vec
// {
//     public:
//         int *arr;
//         int size;

//         vec(int s){
//             size = s;
//             arr = new int[size];
//         }

//         int dotProduct(vec &v1){
//             int result = 0;
//             for (int i = 0; i < size; i++)
//             {
//                 result += this->arr[i] * v1.arr[i];
//             }
//             return result;            
//         }
// };
// int main()
// {
//     vec v1(3), v2 = v1;
//     v1.arr[0] = 10;
//     v1.arr[1] = 9;
//     v1.arr[2] = 21;
//     cout<<"result: "<<v1.dotProduct(v2)<<endl;
//     return 0;
// }


#include <iostream>
using namespace std;

template <class x>
class vec
{
    public:
        x *arr;
        int size;

        vec(int s){
            size = s;
            arr = new x[size];
        }

        x dotProduct(vec &v1){
            x result = 0;
            for (int i = 0; i < size; i++)
            {
                result += this->arr[i] * v1.arr[i];
            }
            return result;            
        }
};
int main()
{
    vec<int> v1(3), v2 = v1;
    v1.arr[0] = 10;
    v1.arr[1] = 9;
    v1.arr[2] = 21;
    cout<<"result <int> : "<<v1.dotProduct(v2)<<endl;

    
    vec<float> v3(3), v4 = v3;
    v3.arr[0] = 10.21;
    v3.arr[1] = 9.53;
    v3.arr[2] = 21.62;
    cout<<"result <float>: "<<v3.dotProduct(v4)<<endl;
    return 0;
}
