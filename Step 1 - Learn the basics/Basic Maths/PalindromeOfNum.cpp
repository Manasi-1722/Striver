#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int rev = 0;
	int dup = n;

	while(n > 0)
	{
		int ld = n % 10;
		rev = (rev * 10) + ld;
		n = n/10;
	}

	if(rev == dup)
	{
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;
}
