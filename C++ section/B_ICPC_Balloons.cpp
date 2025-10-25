#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        stringstream ss(s);
        char ch;
        int sol[26] = {0};
        int ballon = 0;
        while (ss >> ch)//Reads one character at a time from ss.
        {
            int id = ch - 'A';
        
        if (sol[id] == 0)
        {
            ballon += 2;
            sol[id] = 1;
        }
        else
        {
            ballon += 1;
        }
    }

        cout << ballon << endl;
    }
    return 0;
}