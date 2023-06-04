#include <bits/stdc++.h>
using namespace std;

/* 
Map - It is a combination of KEY + VALUE
-> It always stores unique keys 
-> but it can have duplicate value
-> The keys are always stored in sorted order
-> 


 */
int main()
{

    // map which has key-int and value-int
    map<int, int> mp;

    // map which has key-int and value-pair<int,int>
    map<int, pair<int,int>> mpp;
    mpp[1] = {2,2};

    // map which has key-pair<int,int> and value-int
    map<pair<int, int>, int> mp1;
    mp1[{2,3}] = 7;

    mp[1] = 7;   // {1, 7}

    mp.insert({3, 1});

    mp.insert({2, 4});

    for(auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mp[1] << endl;   // returns the value of given key
    cout << mp[4] << endl;   // if key is not present it returns 0


    // if we find an element which is not there in set 
    // then it always returns st.end() 
    // i.e index which is just after last elements index
    auto it = mp.find(7);
    
    // This is the syntax
    auto it = mp.lower_bound(2);

    auto it = mp.upper_bound(3);

    // erase, swap, size, empty are same
    // Time complexity - O(logn)
    
    // ************ Multi-map ***********

    multimap<int, int> mm;
    // everything same as map, only it can store multiple keys
    // i.e duplicate keys are allowed but in stored order 
    // {1,2} and {1,7} both can be stored in multimap
    // only mp[key] function cannot be used here



    // ************ Unordered-map **********


    unordered_map<int, int> um;
    // Unordered map -> it has unique keys but not in sorted order
    // Time complexity - O(1) and worst case it is O(n)
    // Same as set and unordered set difference
    return 0;
}