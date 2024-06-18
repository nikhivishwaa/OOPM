/* creating reference of function */

#include <iostream>
using namespace std;

int sum(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int main()
{
    cout<<"sum: "<<sum<<endl;
    cout<<"&sum: "<<&sum<<endl;

    cout<<"sub: "<<sub<<endl;
    cout<<"&sub: "<<&sub<<endl<<endl;

    printf("&sub: %hx\n",&sub);
    printf("*sub: %hx\n",*sub);
    printf("sub: %hx\n",sub);

    printf("&sum: %hx\n",&sum);
    printf("*sum: %hx\n",*sum);
    printf("sum: %hx\n",sum);

    // typedef int (*function)(int,int);

    // function ref = &sum;

    // printf("sub from ref by typedef int (*f)(int,int): %d\n",(*ref)(6,6));

    // int (*function)(int,int) = sub; these both are same
    int (*function)(int,int) = &sub;
    printf("sub by (*funtion)(5,3) pointer = %d\n",(*function)(5,3));

    // folllwing will not work
    // printf("sub by funtion->(8,9) = %d\n",function->(8,9));

    int (*func[2])(int,int);
    func[0] = sub;
    func[1] = sum;

    printf("sub by (*func[0])(5,3) = %d\n",(*func[0])(5,3));
    printf("sum by (*func[1])(5,3) = %d\n",(*func[1])(5,3));

    delete[] func;

    // following lines will not execute
    printf("sum by sum(5,3) after deletion = %d\n", sum(5,3));
    printf("sum by (*func[1])(5,3) after deletion = %d\n",(*func[1])(5,3));
    return 0;
}