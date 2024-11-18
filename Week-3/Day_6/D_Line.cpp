// Date: 18-11-2024 at 17:48 BST
// Link:https://codeforces.com/problemset/problem/1722/D
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
        cin >> n;
        string s;
        cin >> s;
        long long ans = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                ans += i;
                v.push_back((n - 1 - i) - i);
            }
            else
            {
                ans += (n - 1 - i);
                v.push_back(i - (n - 1 - i));
            }
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                ans += v[i];
            }
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}