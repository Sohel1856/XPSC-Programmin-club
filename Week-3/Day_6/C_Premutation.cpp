// Date: 18-11-2024 at 19:31 BST
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
        int n;
        cin >> n;
        int mat[n + 5][n];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                cin >> mat[i][j];
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n - 1; j++)
        //     {
        //         cout << mat[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        map<int, int> mp;
        map<int, int> m;
        for (int i = 1; i <= n; i++)
        {
            mp[mat[i][n - 1]] = i;
            m[mat[i][n - 1]]++;
        }

        // for (auto val : mp)
        // {
        //     cout << val.first << " " << val.second << endl;
        // }
        // for (auto val : m)
        // {
        //     cout << val.first << " " << val.second << endl;
        // }
        int idx = 0, value = 0;
        for (auto val : m)
        {
            if (val.second == 1)
                idx = val.first;
            else
                value = val.first;
        }
        // cout << idx << " " << value << endl;
        // cout << mp[idx] << endl;
        for (int i = 1; i < n; i++)
        {
            cout << mat[mp[idx]][i] << " ";
        }
        cout << value << endl;
    }

    return 0;
}