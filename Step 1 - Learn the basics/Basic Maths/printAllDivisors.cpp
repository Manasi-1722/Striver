#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1 method ..... TC = O(n)
    // int n;
    // cin >> n;

    // for(int i=1; i<=n; i++)
    // {
    //     if(n % i == 0)
    //         cout << i << " ";
    // }


    // 2 method 
    int n;
    cin >> n;

    vector<int> v;

    for(int i=1; i*i<=n; i++)
    {
        if(n % i == 0)
        {
            v.push_back(i);
            if(n / i != i)
            {
                 v.push_back(n/i);
            }
           
        }
    }

    sort(v.begin(), v.end());

    for(auto it : v)
    {
        cout << it << " ";
    }


    return 0;
}