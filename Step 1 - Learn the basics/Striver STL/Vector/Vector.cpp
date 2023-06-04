#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(7);  // Same as push_back 
    v.push_back(2);
    // emplace_back is FASTER than push_back

    cout << v[0] <<endl;
    cout << v[1] <<endl;
    cout << v[2] <<endl;
    cout << v.back() << endl;   // prints the last element of vector
    
    vector<pair<int,int>> vec;

    vec.push_back({7,18});     // Major Syntax difference 
    vec.emplace_back(7,28);
    cout << vec[0].first << " ";
    cout << vec[0].second << endl;
    cout << vec[1].first << " ";
    cout << vec[1].second << endl;

   vector<int> v1(3,18);  // (size, element)
   cout << v1[0] << " " << v1[1] << " " << v1[2] << endl;   // 18 18 18

   vector<int> v2(3);
   cout << v2[0] << " " << v2[1] << " " << v2[2] << endl;   // 0 0 0

    vector<int> v3(v1);   // created v3 new vector and copied v1 vector in v3
    cout << v3[0] << " " << v3[1] << " " << v3[2] << endl;  // 18 18 18

    return 0;
}