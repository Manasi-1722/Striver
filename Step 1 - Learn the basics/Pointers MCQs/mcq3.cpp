#include <bits/stdc++.h>
using namespace std;

int main()
{
    int first = 8;
    int *p = &first;
    cout << (*p)++ << " " << first << endl;

    return 0;
}