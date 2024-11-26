// Date: 26-11-2024 at 20:55 BST
// Link:https://codeforces.com/problemset/problem/1857/C
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int m = ((n * (n - 1)) / 2);
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i += --n)
    {
        cout << v[i] << " ";
    }
    cout << v[m - 1] << endl;
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