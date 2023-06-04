#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

	vector<int> v;
    int sum = 0;
	int cnt = 0;
    int dup = n;
    while (n > 0)
    {
        int ld = n % 10;

        v.push_back(ld);

        n = n / 10;
    }

	int k = v.size();
	
	for(int i=0; i<k; i++)
	{
		sum = sum + pow(v[i], k);
	}
    
    if(sum == dup)   cout << "true";
    else   cout << "false";

    

    return 0;
}