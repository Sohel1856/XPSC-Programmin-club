// Date: 19-11-2024 at 20:09 BST
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
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n);
        int Sum = 0;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] <= q)
            {
                Sum++;
            }
            else
                Sum = 0;
            ans += max(0, (Sum - k + 1));
        }
        cout << ans << endl;
    }

    return 0;
}