#include <bits/stdc++.h>
using namespace std;

int arr[26];
char s[200005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int ans=0;
        int n;
        cin >> n;
        // string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            arr[s[i] - 'a']++;
        }
        sort(arr, arr+26);
        for(int i=25; i>=0; i--)
        {
            if(arr[i] == 0) break;
            else
            {
                ans=max(ans,min(arr[i],25-i+1));
            }
            
        }
        cout << ans << endl;
    }
    return 0;
}