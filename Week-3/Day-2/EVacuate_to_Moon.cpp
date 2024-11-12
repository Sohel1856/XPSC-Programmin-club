// Date: 12-11-2024 at 19:29 BST
// Link:
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
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> v;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            v1.push_back(a);
        }
        sort(v.begin(), v.end(), greater<int>());
        sort(v1.begin(), v1.end(), greater<int>());
        long long sum = 0;
        for (int i = 0; i < min(n, m); i++)
        {
            sum += min(1ll * v[i], 1ll * v1[i] * h);
        }
        cout << sum << endl;
    }
    return 0;
}