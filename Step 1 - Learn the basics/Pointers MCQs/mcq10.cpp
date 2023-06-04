#include <bits/stdc++.h>
using namespace std;

void update(int *p)
{
    *p = (*p) * 2;
}


void increment(int **p)   // 13
{
    ++(**p);
}
int main()
{
    int i = 10;
    update(&i);
    cout << i << endl;


// ques 11

    // int first = 110;
    // int *p = &first;
    // int **q = &p;

    // int second = (**q)++ + 9;

    // cout << first << " " << second << endl;


// ques 12

    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;   // *r is pointing to first 
    ++(*r);
    cout << first << " " << second << endl;


// ques 13

    int num = 110;
    int *ptr = &num;
    increment(&ptr);

    cout << num << endl;
    return 0;
}