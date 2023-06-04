#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Unordered set stores all unique elements
    // but does not stores in sorted order
    // In this lower bound and upper bound does not exist
    // Rest all functions are same  
    // It stores elements in randamized order
    // every function takes O(1) time and once 
    // in a Blue moon its worst case TC is O(n)
    unordered_set<int> us;

    us.insert(1);  
    us.insert(2);  
    us.insert(2);  //      ****Unique element****
    us.insert(7);  
    us.emplace(4);  
    us.insert(6);   

    for(auto it : us)
    {
        cout << it << " ";
    }
    cout << endl;


    us.erase(6);        
    for(auto it : us)
    {
        cout << it << " ";
    }
    cout << endl;


    auto it2 = us.find(1);
    us.erase(it2);
    for(auto it : us)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}