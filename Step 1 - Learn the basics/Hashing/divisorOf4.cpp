#include <bits/stdc++.h> 
using namespace std;

int divideByFour(vector<int> &arr){
    int n = arr.size();
    int i;
    for(int i=0; i<n; i++)
    {
        if(arr[i] / 4 != 0)
        {
            arr[i] = arr[i]/4;
        }
        else {
            arr[i] = -1;
        }
    }

    return arr[i];
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)  cin>>arr[i];

        for(int i=0; i<n; i++)
        {
            if(arr[i] % 4 == 0)
            {
                cout << arr[i] / 4 << " ";
            }
            else{
                cout << -1 << " ";
            }
        }
    }

}