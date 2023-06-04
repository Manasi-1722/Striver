#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }


    // precompute
    int hash[13] = {0};
    for(int i=0; i<n; i++)
    {
        hash[arr[i]] += 1;
    }

    // Using MAP  **** Remember - Map stores all elements in sorted order ***

    // precompute

    map<int, int> mpp;
    for(int i=0; i<n; i++)
    {
        mpp[arr[i]]++;
    }


    for(auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;

    }

    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;
        
        //fetching
        cout << hash[num] << endl;

        // fetching using map 
        cout << mpp[num] << endl;

        cout << "--------" << endl;

    }


    // finding max element and max frequency 

        int maxFreq = INT_MIN;
        int minFreq = INT_MAX;

        if(it.second > maxFreq)
        {
            int maxx = it.second;
            cout << "Maximum frequency = " << maxx << endl;
        }
        if(it.second < minFreq)
        {
            int minn = it.second;
            cout << "Minimum frequency = " << minn << endl;
        }



    
    return 0;
}