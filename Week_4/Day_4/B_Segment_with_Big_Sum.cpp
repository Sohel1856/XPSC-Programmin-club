// Date: 23-11-2024 at 12:34 BST
// Link:https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
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
    long long l = 0, r = 0, ans = LONG_LONG_MAX, sum = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum >= k)
        {
            while (sum >= k)
            {
                ans = min(ans, r - l + 1);
                sum -= v[l];
                l++;
            }
        }
        r++;
    }
    if (ans == LONG_LONG_MAX)
    {
        cout << "-1" << endl;
        return 0;
    }
    else

        cout << ans << endl;

    return 0;
}