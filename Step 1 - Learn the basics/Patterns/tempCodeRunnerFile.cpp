    int spaces = 0;
    for(int i=1; i<=n; i++)
    {
        //star 
        for(int j=1; j<= n-i+1; j++)
        {
            cout << "*";
        }
        // space 
        for(int j=0; j < spaces; j++)
        {
            cout << " ";
        }
        //star 
        for(int j=1; j<= n-i+1; j++)
        {
            cout << "*";
        }
        spaces += 2;
        cout << endl;

    }

    spaces = n;
    for(int i=1; i<=n; i++)
    {
        //star 
        for(int j=1; j<= i; j++)
        {
            cout << "*";
        }
        // space 
        for(int j=0; j < spaces; j++)
        {
            cout << " ";
        }
        //star 
        for(int j=1; j<= i; j++)
        {
            cout << "*";
        }
        spaces -= 2;
        cout << endl;

    }