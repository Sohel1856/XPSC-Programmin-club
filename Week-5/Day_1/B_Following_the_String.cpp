// Date: 28-11-2024 at 12:24 BST
// Link:
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<char, int> mp;
    string sr = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < sr.size(); i++)
    {
        mp[sr[i]] == 0;
    }
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        for (auto it : mp)
        {
            if (it.second == v[i])
            {
                cout << it.first;
                mp[it.first]++;
                break;
            }
        }
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