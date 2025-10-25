#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string x;
    cin >> x;
    stringstream ss(s);
    string word;

    int cnt = 0;
    while (ss >> word)
    {
        if (x == word)
        {
            cnt++;
        }
    }
    cout << cnt<<endl;
    return 0;
}