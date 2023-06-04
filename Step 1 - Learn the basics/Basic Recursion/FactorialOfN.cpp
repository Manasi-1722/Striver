#include <bits/stdc++.h>
using namespace std;

void func(int i, int fact)   // parameter way
{
    if(i == 1)
    {
        cout << fact << endl;
        return;
    }

    func(i-1, fact*i);
    
}


int fact(int n)   // functional way
{
    if(n == 0){
        return 1;
    }
    return n * fact(n-1);
}
int main()
{
    int n;
    cin >> n;
    func(n, 1);
    cout << fact(n) << endl;
    return 0;
}