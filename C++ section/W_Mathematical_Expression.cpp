#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char s, t;
    cin >> a >> s >> b >> t >> c;
    int res;
    if (s == '+')
    {
        res = a + b;
    }
    else if (s == '-')
    {
        res = a - b;
    }
    else if (s == '*')
    {
        res = a * b;
    }
    if (res == c)

    {
        cout << "Yes";
    }

    else
    {
        cout << res;
    }
    return 0; 
}