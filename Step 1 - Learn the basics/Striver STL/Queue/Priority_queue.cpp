#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Priority queue -> The element which has the largest value states at the top.
    // It is not a linear data structure ... inside pq a Tree ds is maintained
    // *****Max Heap***** - Maximum priority queue
    priority_queue<int> pq;

    pq.push(9);  // 9
    pq.push(8);  // 9 8
    pq.push(10);  // 10 9 8  
    pq.push(11);   // 11 10 9 8  

    cout << pq.top() << endl;  // prints 11

    pq.pop();   // pq is {10 9 8}  deletes top element

    cout << pq.top() << endl;

    // size swap empty functions are same

    // *****Min heap***** - Minimum priority queue 
    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(9);  // 9
    pq1.push(8);  // 8 9
    pq1.push(10);  // 8 9 10  
    pq1.push(11);   // 8 9 10 11  

    cout << pq1.top() << endl;  // prints 8

    // ****Time Complexity****
    // -> push - log(n)
    // -> pop - log(n)
    // -> top - O(1)

    return 0;
}