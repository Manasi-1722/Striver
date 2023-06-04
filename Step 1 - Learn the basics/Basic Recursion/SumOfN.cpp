#include <bits/stdc++.h>
using namespace std;


void func(int i, int sum)   // Parameterised way
{
    if(i < 1)
    {
        cout << sum << endl;
        return;
    }
    func(i-1, sum+i);
}

int sum(int n)   // functional way
{
    if(n == 0){
        return 0;
    }

    return n + sum(n-1);    
}
int main()
{
    int n;
    cin >> n;
    func(n, 0);

    cout << sum(n) << endl;
    return 0;
}