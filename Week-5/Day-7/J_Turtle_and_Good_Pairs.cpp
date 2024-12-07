// Date: 07-12-2024 at 23:17 BST
// Link: https://codeforces.com/problemset/problem/2003/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> freq(26, 0);

        for (char a : s)
        {
            freq[a - 'a']++;
        }

        while (n != 0)
        {

            for (int i = 0; i < 26; i++)
            {
                if (freq[i] != 0)
                {
                    char ch = i + 'a';
                    cout << ch;
                    freq[i]--;
                    n--;
                }
            }
        }

        cout << endl;
    }
    return 0;
}
