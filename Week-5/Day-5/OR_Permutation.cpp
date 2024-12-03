// Date: 03-12-2024 at 20:07 BST
// Link: https://www.codechef.com/problems/PERMOR
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
        while (n > 0)
        {
            cout << n << " ";
            n--;
        }
        cout << endl;
    }
    return 0;
}