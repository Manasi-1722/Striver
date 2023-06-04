#include <bits/stdc++.h>
using namespace std;

int main()
{
    // FIFO - First In First Out

    queue<int> q;
    q.push(1);  // 1
    q.push(2);  // 1 2
    q.emplace(4);   // 1 2 4

    q.back() += 5;

    cout << q.back() << endl;  // 4 + 5 = 9

    // q is {1, 2, 9}
    cout << q.front() << endl;  // 1 

    q.pop();      // q is {2, 9}  pop deletes first element

    cout << q.front() << endl;

    cout << q.size() << endl;

    cout << q.empty() << endl;
    
    return 0;
}