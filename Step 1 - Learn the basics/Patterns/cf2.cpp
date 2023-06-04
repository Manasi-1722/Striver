#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x = 0, y = 0;
        int n;
        cin >> n;
        string s;
        cin >> s;
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                x--;
            }
            if (s[i] == 'R')
            {
                x++;
            }
            if (s[i] == 'U')
            {
                y++;
            }
            if (s[i] == 'D')
            {
                y--;
            }

            if (x == 1 && y == 1)
                f = 1;
        }

        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}