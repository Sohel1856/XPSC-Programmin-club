// Date: 26-11-2024 at 19:42 BST
// Link:
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    long long c;
    cin >> n >> c;
    vector<int> v(n), V(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        V[i] = v[i] + i + 1;
    }
    sort(V.begin(), V.end());

    int ans = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += V[i];
        if (sum > c)
            break;
        ans++;
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