#include <bits/stdc++.h>
using namespace std;

/* Vector is same as array which 
stores continues memory location but 
it is DYNAMIC in nature */
void printVector(vector<string> v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    // v.push_back(2);
    cout<<endl;
}
int main()
{
    vector<int> v;
    // vector<double> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
    //     printVector(v);
    //     v.push_back(x);
    }
    // printVector(v);

    vector<int> v1;
    v1.push_back(7);
    v1.push_back(6);
    v1.push_back(5);   // Adds element to end of array === O(1)
    
    v1.pop_back();   // Removes last element from array === O(1)
    // printVector(v1);

    // // Copy Vector
    // vector<int> v2 = v1;   // O(n)  Expensive operation
    // v2.push_back(4);
    // printVector(v1);
    // printVector(v1);
    // printVector(v2);


    vector<string> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin>>x;
    //     v.push_back(x);
    // }
    // printVector(v);
}
