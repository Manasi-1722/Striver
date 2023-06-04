#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Brute force approach 
    // TC = O(n)
    int cnt = 0;
    // for(int i=1; i<=n; i++)
    // {
    //     if(n % i == 0)
    //         cnt++;
    // }

    // if(cnt == 2)
    //     cout << "Prime";
    // else 
    //     cout << "Not Prime";    

    // 2 method
    // TC = O(sqrt(n))

    for(int i=1; i*i<=n; i++)
    {
        if(n % i == 0)
        {
            cnt++;
            if(n/i != i){
                cnt++;
            }    
        }
            
    }

    if(cnt == 2)
        cout << "Prime";
    else 
        cout << "Not Prime";    


    return 0;
}