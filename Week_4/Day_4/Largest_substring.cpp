// Date: 23-11-2024 at 23:31 BST
// Link: https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
#include <bits/stdc++.h>
using namespace std;

int longestKSubstr(string s, int k)
{
    int len = s.size();
    int l = 0, r = 0, ans = -1;
    map<char, int> mp;
    while (r < len)
    {
        mp[s[r]]++;
        if (mp.size() == k)
        {
            ans = max(ans, r - l + 1);
        }
        else if (mp.size() > k)
        {
            while (mp.size() > k)
            {
                mp[s[l]]--;
                if (mp[s[l]] == 0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }
            if (mp.size() == k)
                ans = max(ans, r - l + 1);
        }
        r++;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int k;
    cin >> k;

    cout << longestKSubstr(s, k) << endl;
    return 0;
}
