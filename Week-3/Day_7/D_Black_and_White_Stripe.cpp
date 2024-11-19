// Date: 19-11-2024 at 18:08 BST
// Link:https://codeforces.com/problemset/problem/1690/D
#include <bits/stdc++.h>
using namespace std;
void solve(int n, int k)
{
    string s;
    cin >> s;
    int l = 0, r = 0;
    long long sum = 0, ans = INT_MAX;
    while (r < n)
    {
        if (s[r] == 'W')
        {
            sum++;
        }
        if (r - l + 1 == k)
        {
            ans = min(ans, sum);
            if (s[l] == 'W')
                sum--;
            l++;
        }
        r++;
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
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }

    return 0;
}