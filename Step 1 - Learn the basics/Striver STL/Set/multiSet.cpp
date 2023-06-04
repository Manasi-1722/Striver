#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> m;
    // everything is same as set
    // only stores duplicate elements also

    m.insert(7);    // 7 
    m.insert(7);    // 7 7
    m.insert(7);    // 7 7 7

    for(auto it : m)
    {
        cout << it << " ";
    }
    cout << endl;

    int cnt = m.count(7);
    cout << cnt << endl;


    m.erase(7);   // All 7's are deleted

    for(auto it : m)
    {
        cout << it << " ";
    }
    cout << endl;

    int cnt1 = m.count(7);
    cout << cnt1 << endl;



    m.erase(m.find(7));    // only a single 7 is erased
 
    for(auto it : m)
    {
        cout << it << " ";
    }
    cout << endl;

    // m.erase(m.find(1), m.find(1)+2);

    return 0;
}