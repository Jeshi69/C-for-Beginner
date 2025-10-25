#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ticket;
        cin >> ticket;

        int leftSum = (ticket[0] - '0') + (ticket[1] - '0') + (ticket[2] - '0');
        int rightSum = (ticket[3] - '0') + (ticket[4] - '0') + (ticket[5] - '0');

        if (leftSum == rightSum)
            cout << "YES"<<endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
