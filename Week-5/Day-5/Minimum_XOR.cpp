// Date: 03-12-2024 at 20:11 BST
// Link: https://www.codechef.com/problems/MINMXOR
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
        int n;
        cin >> n;
        vector<int> v(n);
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            x = (x ^ v[i]);
        }

        int temp = x;
        for (int i = n - 1; i >= 0; i--)
        {
            int currXor = x ^ (v[i]);
            temp = min(currXor, temp);
        }
        cout << temp << endl;
    }
    return 0;
}
