/* creating Node in C */

#include <stdio.h>

// method 1
struct Node
{
    int data;
    struct Node *next;
    char ch;
};

// method 2
typedef struct Node1
{
    // struct Node1 *next;
    // struct Node1 *next1;
    // struct Node1 *next2;
    int data;
    // double data1;
    char data2;
    struct Node node;
    // struct Node node, hi;

} Node1;

int main()
{
    printf("Size of Node: %d\n", sizeof(struct Node));
    printf("Size of Node1: %d\n", sizeof(Node1));
    Node1 n1;
    printf("\nSize of n1: %d\n", sizeof(n1));
    // printf("Size of n1.next: %d %u\n", sizeof(n1.next), &n1.next);
    // printf("Size of n1.next1: %d %u\n", sizeof(n1.next1), &n1.next1);
    // printf("Size of n1.next2: %d %u\n", sizeof(n1.next2), &n1.next2);
    // printf("Size of n1.data: %d %u\n", sizeof(n1.data), &n1.data);
    // printf("Size of n1.data1: %d %u\n", sizeof(n1.data1), &n1.data1);
    printf("Size of n1.data2: %d %u\n", sizeof(n1.data2), &n1.data2);
    printf("Size of n1.node: %d %u\n", sizeof(n1.node), &n1.node);
    // printf("Size of n1.hi: %d %u\n", sizeof(n1.hi), &n1.hi);

    return 0;
}