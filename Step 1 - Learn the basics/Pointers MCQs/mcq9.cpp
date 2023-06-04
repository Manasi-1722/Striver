#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {11, 12, 13, 14, 15};

    cout << arr << " " << &arr << endl;

    int *p = arr;
    cout << p[2] << endl;   
    // p[2]  means *(p + 2)


    cout << *(arr) << " " << *(arr + 3) << endl;

    return 0;
}