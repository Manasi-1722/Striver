#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Deque -> 
    deque<int> dq;
    dq.push_back(1);  // 1
    dq.emplace_back(2);  // 1 2

    for(auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;   // 1 2

    dq.push_front(3);   // 3 1 2
    dq.emplace_front(4);  // 4 3 1 2 

    for(auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;   // 4 3 1 2

    dq.pop_front();

    for(auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;   // 3 1 2

    dq.pop_back();

    for(auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;   // 3 1

    // rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
    
    return 0;
}