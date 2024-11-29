// Date: 29-11-2024 at 14:07 BST
// Link:https://codeforces.com/problemset/problem/1914/B
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
        int n, k;
        cin >> n >> k;
        for (int i = n - k; i > 0; i--)
            cout << i << " ";
        for (int i = n - k + 1; i <= n; i++)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}