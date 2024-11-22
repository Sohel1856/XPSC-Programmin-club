// Date: 22-11-2024 at 22:40 BST
// Link:
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long l = 0, r = 0, sum = 0, ans = 0;
    multiset<int> ml;
    while (r < n)
    {
        ml.insert(v[r]);
        int mn = *ml.begin(), mx = *ml.rbegin();
        if ((mx - mn) <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l <= r)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if (mx - mn <= k)
                {
                    break;
                }
                ml.erase(ml.find(v[l]));
                l++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if ((mx - mn) <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}