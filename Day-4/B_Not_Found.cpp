// #include <bits/stdc++.h>
// #define null nullptr
// #define ll long long int
// #define nl '\n'
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     string s;
//     cin >> s;
//     vector<int> v(26, 0);
//     for (int i = 0; i < s.size(); i++)
//     {
//         v[s[i] - 'a']++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         if (v[i] == 0)
//         {
//             cout << char(i + 'a') << nl;
//             return 0;
//         }
//     }
//     cout << "None" << nl;
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
//     string s;
//     cin >> s;
//     vector<bool> v(26, false);
//     for (auto x : s)
//         v[x - 'a'] = true;
//     char res;
//     bool flag = false;
//     for (int i = 0; i < 26; i++)
//     {
//         if (!v[i])
//         {
//             res = i + 'a';
//             flag = true;
//             break;
//         }
//     }
//     if (flag)
//         cout << res << nl;
//     else
//         cout << "None" << nl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    map<char, int> frequency;

    // Count occurrences of each character
    for (char c : s)
    {
        frequency[c]++;
    }

    // Print each unique character and its count
    bool found = false;
    for (auto it : frequency)
    {
        cout << it.first << " appears " << it.second << " times" << endl;
        found = true;
    }

    if (!found)
    {
        cout << "None" << endl;
    }

    return 0;
}
