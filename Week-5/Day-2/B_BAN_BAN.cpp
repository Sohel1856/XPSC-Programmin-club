// Date: 29-11-2024 at 18:46 BST
// Link:
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s = "#";
    for (int i = 0; i < n; i++)
    {
        s = s + "BAN";
    }
    n = s.size() - 1;
    vector<pair<int, int>> ans;
    int l = 2, r = n;
    while (l < r)
    {
        ans.push_back({l, r});
        swap(s[l], s[r]);
        l += 3;
        r -= 3;
    }
    cout << ans.size() << endl;
    for (auto val : ans)
    {
        cout << val.first << " " << val.second << endl;
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