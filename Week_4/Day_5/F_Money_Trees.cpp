// Date: 24-11-2024 at 10:19 BST
// Link: https://codeforces.com/problemset/problem/1873/F
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
        long long k;
        cin >> n >> k;

        vector<long long> a(n), h(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> h[i];

        int l = 0, r = 1;
        ll sum = a[0];
        int ans = 0;
        if (sum <= k)
            ans = 1;
        while (r < n)
        {
            if (h[r - 1] % h[r] == 0)
            {
                sum += a[r];
            }
            else
            {
                l = r;
                sum = a[r];
            }

            while (sum > k)
            {
                sum -= a[l];
                l++;
            }
            ans = max(ans, r - l + 1);

            r++;
        }
        pr ans nl;
    }
    return 0;
}