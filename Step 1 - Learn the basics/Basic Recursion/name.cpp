#include <bits/stdc++.h>
using namespace std;

// N times printing name using Recursion
void name(int i, int n)
{
    if(i > n)
        return;

    cout << "Mansi" << endl;
    name(i+1, n);    
}


int main()
{

    int n;
    cin >> n;

    name(1,n);

    return 0;
}