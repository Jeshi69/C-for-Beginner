#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int E = 0, e = 0, G = 0, g = 0, Y = 0, y = 0, P = 0, p = 0, T = 0, t = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'E' || s[i] == 'e')
        {
            E++;
            
        }
        else  if (s[i] == 'G' || s[i] == 'g')
        {
            G++;
            }
        else  if (s[i] == 'Y' || s[i] =='y')
        {
            Y++;
            }
        else if (s[i] == 'P' || s[i] == 'p')
        {
            P++;
            }
        else  if (s[i] == 'T' || s[i] == 't')
        {
            T++;
            }
    }

    int result = min({E,G,Y,P,T});

    cout << result << endl;

    return 0;
}
