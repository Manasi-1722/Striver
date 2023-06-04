#include <bits/stdc++.h>
using namespace std;

void func(int i, int n)
{
    if(i > n)
        return;

    cout << i << "\n";
    func(i+1, n);    
}

// below code using Backtracking

void func1(int i, int n)
{
    if(i < 1)  return;

    func1(i-1, n); 
    cout << i << "\n";
       
}

int main()
{
    int n;
    cin >> n;

    func(1, n);
    cout << "----------" << endl;
    func1(n, n);
}