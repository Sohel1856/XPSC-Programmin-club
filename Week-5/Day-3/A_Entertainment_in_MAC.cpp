// Date: 30-11-2024 at 18:52 BST
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
        string s;
        cin >> s;
        n = s.length();

        bool flag = false;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == s[n - i - 1])
                continue;
            else if (s[i] > s[n - i - 1])
            {
                flag = true;
            }
            else
                break;
        }
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (flag == false)
        {
            cout << s << endl;
        }
        else
        {
            cout << rev << s << endl;
        }
    }

    return 0;
}

// // Date: 30-11-2024 at 18:18 BST
// // Link:https://codeforces.com/problemset/problem/1935/A
// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     string rev = s;
//     reverse(rev.begin(), rev.end());
//     // cout << rev << endl
//     //  << endl;
//     if (s <= rev)
//     {
//         if (n % 2 == 0)
//         {
//             cout << s << endl;
//         }
//         else
//             cout << s << rev << endl;
//     }
//     else
//     {
//         if (n % 2 == 1)
//         {
//             cout << rev << endl;
//         }
//         else
//         {
//             cout << rev << s << endl;
//         }
//     }
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }