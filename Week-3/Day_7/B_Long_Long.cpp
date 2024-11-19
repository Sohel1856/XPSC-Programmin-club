// Date: 19-11-2024 at 19:17 BST
// Link:https://codeforces.com/problemset/problem/1843/B
#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    vector<int> v(n);
    long long sum = 0;
    // for (int i = 0; i < n; i++)
    for (auto &x : v)
    {
        cin >> x;
        sum += abs(x);
    }
    int ans = 0, count = 0;
    for (auto val : v)
    {
        if (val == 0 && count == 0)
        {
            continue;
        }
        if (val <= 0)
        {
            count++;
        }
        else
        {
            if (count > 0)
            {
                ans++;
            }
            count = 0;
        }
    }
    if (count)
    {
        ans++;
    }
    cout << sum << " " << ans << endl;
}
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
        solve(n);
    }

    return 0;
}