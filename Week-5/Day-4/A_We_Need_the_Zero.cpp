// Date: 05-12-2024 at 23:14 BST
// Link:
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> v(n), b(n);
    long long x = 0, y = 0;
    map<long long, long long> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        x ^= v[i];
    }

    for (int i = 0; i < n; i++)
    {
        b[i] = v[i] ^ x;
    }
    for (int i = 0; i < n; i++)
    {
        y ^= b[i];
    }
    if (y == 0)
    {
        cout << x << endl;
    }
    else
    {
        cout << "-1\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
