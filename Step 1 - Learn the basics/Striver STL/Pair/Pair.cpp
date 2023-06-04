#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Pairs
    pair<int,int> p = {7,28};
    cout << p.first << " " << p.second << endl;

    pair<int,pair<int,int>> p1 = {18,{7,28}};
    cout << p1.first << " " << p1.second.first  << " " << p1.second.second << endl;

    pair<int,int> arr[] = {{1,2},{1,3},{2,4},{2,5}};

    cout << arr[1].second << " OR " << arr[0].second << endl;
    

    return 0;


}