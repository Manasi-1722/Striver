#include <bits/stdc++.h>
using namespace std;


void print17(int n)
{
    for(int i=0; i<n; i++)
    {
        //space
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";
        }

        //Letter
        char ch = 'A';
        int breakpt = (2*i + 1) / 2;
        for(int j=1; j <= 2*i + 1; j++)
        {
            cout << ch;
            if(j <= breakpt) ch++;
            else ch--;
        }
        //space
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";
        }
        cout << endl;

    }
}

void print18(int n)
{
    for(int i=0; i<n; i++)
    {
        for(char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print19(int n)
{
    int spaces = 0;
    // First part
    for(int i=0; i<n; i++)
    {
        //star
        for(int j=1; j<=n-i; j++)
        {
            cout << "*";
        }
        //space 
        for(int j=0; j < spaces; j++)
        {
            cout << " ";
        }
        //star
        for(int j=1; j<=n-i; j++)
        {
            cout << "*";
        }

        spaces += 2;
        cout << endl;  
    }

    // Second part 
    spaces = 2*n - 2;
    for(int i=1; i<=n; i++)
    {
        //star
        for(int j=1; j<=i; j++)
        {
            cout << "*";
        }
        //space 
        for(int j=0; j < spaces; j++)
        {
            cout << " ";
        }
        //star
        for(int j=1; j<=i; j++)
        {
            cout << "*";
        }

        spaces -= 2;
        cout << endl;  
    }
}

void print20(int n)
{
    int spaces = 2*n - 2;
    for(int i=0; i<n; i++)
    {
        //star
        for(int j=1; j<=i+1; j++)
        {
            cout << "*";
        }
        //spaces
        for(int j=0; j < spaces; j++)
        {
            cout << " ";
        }
        //star
        for(int j=1; j<=i+1; j++)
        {
            cout << "*";
        }
        spaces -=2;
        cout << endl;
    }

    spaces = 2;
    for(int i=1; i<n; i++)
    {
        //star
        for(int j=0; j<=n-i-1; j++)
        {
            cout << "*";
        }
        //spaces
        for(int j=0; j < spaces; j++)
        {
            cout << " ";
        }
        //star
        for(int j=0; j<=n-i-1; j++)
        {
            cout << "*";
        }
        spaces +=2;
        cout << endl;
    }
}


void print21(int n)
{

    // square 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == 0 || j == 0 || i == n-1 || j == n-1)
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

void print22(int n)
{
    for(int i=0; i<2*n-1; i++)
        {
            for(int j=0; j< 2*n-1; j++)
            {
                int top = i;
                int left = j;
                int right = (2*n - 2) - j;
                int down = (2*n - 2) - i;
                
                cout << (n - min(min(top, down), min(left, right))) << " ";
            }
            cout << endl;
        }    
}
int main()
{
    int n;
    cout << "Enter any number - ";
    cin >> n;

    print22(n);
    return 0;
}