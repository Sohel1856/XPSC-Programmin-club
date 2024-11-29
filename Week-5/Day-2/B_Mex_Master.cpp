// Date: 29-11-2024 at 17:17 BST
// Link:https://codeforces.com/problemset/problem/1806/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int nonzero = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
                nonzero++;
            else
                zero++;
        }
        int ans;
        if (zero == 0)
        {
            ans = 0;
        }
        else
        {
            if (nonzero >= zero - 1)
            {
                ans = 0;
            }

            else
            {
                int mx = *max(v.begin(), v.end());
                if (mx == 1)
                    ans = 2;
                else
                    ans = 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}