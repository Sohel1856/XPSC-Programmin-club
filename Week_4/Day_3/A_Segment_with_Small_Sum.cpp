// Date: 22-11-2024 at 21:07 BST
// Link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    long long sum = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum <= k)
        {
            ans = max(ans, r - l + 1);
        }
        else
        {
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}