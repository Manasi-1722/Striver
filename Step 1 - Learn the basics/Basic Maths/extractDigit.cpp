#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    // 1 method
    int lastDigit, cnt = 0;
    while (n > 0)
    {
        lastDigit = n % 10;
        cnt++;
        // cout << lastDigit << " ";
        n = n / 10;
    }
    cout << cnt << endl;


    // 2 method
    int cnt = (int) (log10(n) + 1);

    // log10(7789) = 3.81
    // 3.81 + 1 = 4.81
    // typecast to int ... int(4.81) = 4  (which is number of digits)

    cout << cnt;

    return 0;
}