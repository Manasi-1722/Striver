#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int count = 0;

        for(int i = 0; i<n/2; i++)
        {
            if(s[i] == '0' && s[n-1-i] == '1' || s[i] == '1' && s[n-1-i] == '0')
            {
                count++;
            }
            else{
                break;
            }
        }
        cout << n - (2*count) << endl;
    }
    return 0;
}
