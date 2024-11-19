// Date: 19-11-2024 at 18:33 BST
// Link: https://codeforces.com/contest/1873/problem/D
#include <bits/stdc++.h>
using namespace std;
void solve(int n, int k)
{
    string s;
    cin >> s;
    int l = 0, r = 0;
    long long sum = 0;
    while (r < n)
    {
        if (s[r] == 'B')
        {
            r += k - 1;
            sum++;
        }
        r++;
    }
    cout << sum << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }

    return 0;
}