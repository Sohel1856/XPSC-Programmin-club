// Date: 20-11-2024 at 09:26 BST
// Link:https://www.codechef.com/problems/FOOTBALLTIES?tab=submissions
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
        int a, b;
        cin >> a >> b;
        if (a % 3 == 0)
            cout << '0' << endl;
        else
            cout << a % 3 << endl;
        // int draw = 0;
        // if (a <= 3 && b <= 3 && a == b)
        // {
        //     draw++;
        // }
        // else if (a > b)
        // {
        //     int sub = (a - b) / 3;
        //     draw += sub;
        // }
        // else if (a < b)
        // {
        //     int sub1 = (b - a) / 3;
        //     draw += sub1;
        // }
        // // else if (a == b && a % 3 == 0 && b % 3 == 0)
        // // {
        // //     cout << '0' << endl;
        // // }
        // cout << draw << endl;
    }

    return 0;
}