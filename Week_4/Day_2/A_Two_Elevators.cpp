// Date: 21-11-2024 at 23:25 BST
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
        int a, b, c;
        cin >> a >> b >> c;
        int op1 = abs(a - 1);
        int op2 = abs(b - c) + (c - 1);
        if (op1 < op2)
        {
            cout << '1' << endl;
        }
        else if (op1 > op2)
        {
            cout << '2' << endl;
        }
        else if (op1 == op2)
        {
            cout << '3' << endl;
        }
    }

    return 0;
}