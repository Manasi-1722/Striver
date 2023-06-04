#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;
    ls.push_back(2);  // 2 4 
    ls.emplace_back(4);
    
    ls.push_front(7);   // 7 2 4
    ls.emplace_back(7);  // 7 2 4 7

    for(auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << ls.size() << endl;   // returns size of vector

    cout << ls.front() << endl;  // return first element

    cout << ls.back() << endl;   // returns last element

    ls.pop_front();   // Deletes first element

    for(auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;

    ls.pop_back();   // Deletes last element

    for(auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;

    // begin & end functions to iterator 
    for(auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << *(it) << " ";   // 7 2 4 7
    }
    cout << endl;

    // rbegin & rend functions to reverse iterator
    for(auto it = ls.rbegin(); it != ls.rend(); it++)
    {
        cout << *(it) << " ";   // 7 4 2 7
    }
    cout << endl;

    list<int> copy = {1,2,3,4};
    list<int> man = {9,8,7,6};

    copy.swap(man);  // swap function

    for(auto it : copy)
    {
        cout << it << " ";   // 9 8 7 6
    } 
    cout << endl;

    for(auto it : man)
    {
        cout << it << " ";   // 1 2 3 4
    }
    cout << endl;

    man.clear();   // clear function

    for(auto it : man)
    {
        cout << it << " ";
    }
    cout << endl;

    copy.insert(copy.begin(), 2, 7);
    // vec.insert(vec.begin()+1, 2, 7);
    // here list.begin()+1 or +n i.e anything is not allowed

    for(auto it : copy)
    {
        cout << it << " ";
    }
    cout << endl;

    copy.insert(copy.end(), 2, 7);

    for(auto it : copy)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}