#include <iostream>
using namespace std;

void swap(int **q1, int **q2)
{
    int *temp;
    temp = *q1;
    *q1 = *q2;
    *q2 = temp;
}

int main()
{
    int *p1, *p2;
    int a = 1;
    int b = 2;
    p1 = &a;
    p2 = &b;
    cout << a << endl
         << b << endl;
    cout << p1 << endl
         << p2 << endl;
    swap(&p1, &p2);
    cout << a << endl
         << b << endl;
    cout << p1 << endl
         << p2 << endl;
    cout << *p1 << endl
         << *p2 << endl;
    // int a = 2147483647;
    // int *b = &a;
    // int **c = &b;
    // cout << a << endl
    //      << b << endl
    //      << c << endl
    //      << *c << endl
    //      << **c << endl;
    // *b = 100;
    // cout << a << endl
    //      << b << endl;
}