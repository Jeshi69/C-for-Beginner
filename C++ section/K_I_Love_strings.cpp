#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, r;
       cin >> s >> r;
        string result = "";
        int n = s.size(), m = r.size();
        int len = max(n, m);

        for (int i = 0; i < len; i++)
        {
            if (i < n)
                result += s[i];
            if (i < m)
                result += r[i];
        }

        cout << result << "\n";
    }
}
