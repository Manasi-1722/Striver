#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;
    // This is the way to initialise pair 
    p = make_pair(7, "Mansi");   // 1 method
    p = {17, "Kavi"};            // 2 method

    // we can also use pair to copy something
    pair<int, string> &p1 = p;    // &p1 will replace like references
    p1.first = 1;
    cout<<p.first<<" "<<p.second<<endl;

    // Arrays 
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int, int>p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0], p_array[2]);
    for(int i=0; i<3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    // Input / Output in pair
    cout<<"Enter first pair: ";
    cin>>p.first;
    cout<<p.first;
    
}