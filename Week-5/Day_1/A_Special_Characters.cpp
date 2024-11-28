// Date: 28-11-2024 at 10:32 BST
// Link:https://codeforces.com/problemset/problem/1948/A
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    char k = 'A';
    for (int i = 1; i <= n / 2; i++)
    {
        cout << k << k;
        k++;
    }
    cout << endl;
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