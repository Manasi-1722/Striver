#include <bits/stdc++.h>
using namespace std;

void print11(int n)
{
    int start = 1;
    for (int i=0; i<=n; i++)
    {
        if(i % 2 == 0) start = 0;
        else start = 1;

        for(int j=0; j<i; j++)
        {
            cout << start << " ";
            start = 1 - start;     
        }
        cout << endl;
    }
}


void print12(int n)
{
    for(int i=1; i<=n; i++)
    {
        //numbers
        for(int j=1; j<=i; j++)
        {
            cout << j;
        }

        //space 
        for(int j=1; j<=(2*n) - (2*i); j++)
        {
            cout << "  ";
        }

        //numbers 
        for(int j=i; j>=1; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}


void print13(int n)
{
    int num = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}

void print14(int n)
{
    for(int i=0; i<n; i++)
    {
        for(char ch = 'A'; ch <= 'A' - i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}


void print15(int n)
{
    for(int i=0; i<=n; i++)
    {
        for(char ch = 'A'; ch <= 'A'+ (n-i-1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print16(int n)
{
    for(int i=0; i<n; i++)
    {
        char ch = 'A' + i;
        for(int j=0; j<=i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main()
{
    int n;
    cout << "Enter any number - ";
    cin>>n; 
    // print7(n);
    print14(n);
    
    return 0;
}