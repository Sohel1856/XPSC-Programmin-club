// Date: 20-11-2024 at 09:18 BST
// Link:https://www.codechef.com/problems/RCBCSK
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int rcb, csk;
    cin >> rcb >> csk;
    int sub = (rcb - csk);
    // cout << sub << endl;
    if (sub >= 18)
    {
        cout << "RCB" << endl;
    }
    else
        cout << "CSK" << endl;
    return 0;
}