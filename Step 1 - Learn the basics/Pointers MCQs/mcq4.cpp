#include <bits/stdc++.h>
using namespace std;

int main()
{

    int *p = 0;
    int first = 110;
    p = &first;   // correct
    // *p = first    wrong

    cout << *p << endl;

    return 0;
}