// Date: 21-11-2024 at 22:00 BST
// Link: https://codeforces.com/problemset/problem/1875/A
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    vector<int> v(n);
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        count += min(a - 1, v[i]);
    }

    cout << count + b << endl;
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