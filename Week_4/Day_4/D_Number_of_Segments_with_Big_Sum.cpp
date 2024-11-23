// Date: 23-11-2024 at 13:55 BST
// Link:
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0;
    long long sum = 0, ans = 0;
    for (int r = 0; r < n; r++)
    {
        sum += v[r];
        while (sum >= k)
            sum -= v[l++];
        ans += l;
    }

    cout << ans << endl;
    return 0;
}