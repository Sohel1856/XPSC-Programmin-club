// Date: 20-11-2024 at 09:54 BST
// Link:https://codeforces.com/problemset/problem/1256/A
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
       long long int a, b, n, s;
        cin >> a >> b >> n >> s;
        long long int r = s % n;
        if (r <= b && a * n + b >= s)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}