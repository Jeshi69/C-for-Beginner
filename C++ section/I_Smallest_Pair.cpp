#include <bits/stdc++.h>
using namespace std;
int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N+1];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int res = A[i] + A[j] + (j - i);
                ans = min(ans, res);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
