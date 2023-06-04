#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {1,2,3,4,5};

    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    v.erase(v.begin() + 4);   // Delete 5

    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    v.erase(v.begin() , v.begin() + 2);   // Deletes 1 & 2

    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    vector<int> v1 = {1,2,3,4,5};

    cout << v1.size() << endl;

    v1.pop_back();

    for(auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;


    v1.erase(v1.begin() + 1, v1.begin() + 3);   // Deletes 2 & 3

    for(auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << v1.size() << endl;

    v1.clear();    // this function clears everything in vector
    
    cout << v1.empty() << endl;   // Tells us that vector is empty or not 
    // empty -> 1
    // not empty -> 0


    // ********************** Insert Operations ***************************

 
    vector<int> vec(2,100);  // 100 100 

    for(auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;

    // Insert 300 at start
    vec.insert(vec.begin(), 300);

    for(auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;

    // Insert two 7's after 300 and before 100
    vec.insert(vec.begin()+1, 2, 7);

    for(auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;

    vector<int> copy(2,22);   // 22 22
    vec.insert(vec.begin(), copy.begin(), copy.end());

    for(auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << "**************************" << endl;

    // Swap function in vector
    // copy -> 22 22
    // vec -> 22 22 300 7 7 100 100
    // ****After swapping****
    // copy -> 22 22 300 7 7 100 100
    // vec -> 22 22

    copy.swap(vec);

    for(auto it : copy)
    {
        cout <<  it << " ";
    }
    cout << endl;

    for(auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}