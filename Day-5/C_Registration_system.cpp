// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;

//     while (n--)
//     {
//         string s;
//         cin >> s;
//         vector<string> v;
//         v.push_back(s);
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//                 if (v[i] == v[j])
//                 {
//                     cout << v[i] << i << endl;
//                 }
//                 else
//                 {
//                     cout << "OK" << endl;
//                 }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// #define null nullptr
// #define ll long long int
// #define nl '\n'
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     map<string, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin >> s;
//         mp[s] += 1;
//         if (mp[s] > 1)
//             cout << s << mp[s] - 1 << nl;
//         else
//             cout << "OK" << nl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    unordered_map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;

        if (mp.count(s) == 0)
        {
            mp[s] = 0;
            cout << "OK" << endl;
        }
        else
        {
            mp[s]++;
            cout << s << mp[s] << endl;
        }
    }

    return 0;
}
