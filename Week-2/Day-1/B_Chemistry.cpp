// https://codeforces.com/problemset/problem/1883/B
// https://codeforces.com/problemset/problem/1883/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (char x : s)
            mp[x]++;
        int sum = 0;
        for (auto [x, y] : mp)
            if (y % 2 != 0)
                sum++;
        if (sum - 1 < 0)
            sum = 0;
        else
            sum = sum - 1;
        if (sum <= k && k <= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}