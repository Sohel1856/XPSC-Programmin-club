// Date: 06-12-2024 at 22:30 BST
// Link: https://codeforces.com/problemset/problem/1421/A
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
        long long a, b;
        cin >> a >> b;
        long long x = a ^ b;
        cout << x << endl;
    }
    return 0;
}
