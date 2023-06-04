#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    //precompute 
    int hash[26] = {0};     // this hash is 26 coz string has only lower case letters
    for(int i=0; i<s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    // otherwise we can hash upto 256 
    // int hash[256] = {0};
    // for (int i = 0; i < s.size(); i++)
    // {
    //     hash[s[i]]++;
    // }

    // using MAP
    map<char, int> mpp;
    for(int i=0; i<s.size(); i++)
    {
        mpp[s[i]]++;
    }

    // iterate
    for(auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    

    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;

        // fetching
        cout << hash[c - 'a'] << endl;

        // another way which has hash[256]
        // cout << hash[c] << endl;

        cout << mpp[c] << endl;

        cout << "------------" << endl;

    }

    return 0;
}