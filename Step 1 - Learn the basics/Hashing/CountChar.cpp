#include<bits/stdc++.h>
using namespace std;

int main(){

    char s;
	int letter=0, num=0, space=0;
	s = cin.get();

	while(s != '$')
	{
		if(s >=97 && s <= 122)
		{
			letter++;
		}
		else if(s >= 48 && s <= 57)
		{
			num++;
			
		}
		else if(s == 9 || s == 10 || s == 32)  // 9 for tab "\t"  10 for next line "\n" and 32 for space
		{
			space++;
		}
		
		s = cin.get();
	}

	cout << letter << " " << num << " " << space;
  
}


