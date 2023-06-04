#include <bits/stdc++.h>
using namespace std;

int main()
{
    // LIFO - Last In First Out
    // In Stack there is no Index given to elements
    // It has only 3 main operations
    // -> push   -> pop   -> top
    stack<int> st;

    st.push(7);  // 7
    st.push(6);  // 6 7
    st.emplace(5);  // 5 6 7
    st.push(1);  // 1 5 6 7
    st.push(2);  // 2 1 5 6 7
    st.push(3);  // 3 2 1 5 6 7

    cout << st.top() << endl;  // prints 3

    st.pop();  // st looks like 2 1 5 6 7

    cout << st.top() << endl;  // prints 2

    cout << st.size() << endl;  // 5

    cout << st.empty() << endl;   // returns 0 as stack is not empty

    stack<int> st2;
    st2.swap(st);

    

    return 0;
}