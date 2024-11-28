// Date: 28-11-2024 at 09:25 BST
// Link:https://codeforces.com/contest/2000/problem/D
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, sum = 0;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    string s;
    cin >> s;
    long long ans = 0, l = 0, r = n - 1;

    while (l <= r)
    {
        if (s[l] == 'R')
            sum -= v[l++];
        else if (s[r] == 'L')
            sum -= v[r--];
        else
        {
            ans += sum;
            sum -= v[l++];
            sum -= v[r--];
        }
    }
    cout << ans << endl;
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