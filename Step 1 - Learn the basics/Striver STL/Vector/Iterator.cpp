#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(7);  // Same as push_back 
    v.push_back(2);
    // emplace_back is FASTER than push_back
    
    // Iterator
    vector<int>::iterator it = v.begin();
    cout << *(it) << " ";
    it++;
    cout << *(it) << " ";
    it++;
    cout << *(it) << endl;

    cout << "*****************" << endl;

    // Iterator using For loop
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    cout << "*****************" << endl;
 
    // without For loop
    // auto -> According to the data the datatype is automatically assigned
    for(auto it = v.begin(); it != v.end(); it++)   
    {
        cout << *(it) << endl;
    }

    cout << "*****************" << endl;
    
    // **********Simplest way**********

    for(auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}