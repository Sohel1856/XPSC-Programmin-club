// Date: 16-11-2024 at 19:13 BST
// Link:https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(string pat, string txt)
    {
        int Size = txt.size(), Size2 = pat.size();
        int count = 0;
        map<char, int> mp, MP;
        for (auto val : pat)
            MP[val]++;
        for (int i = 0; i < Size2; i++)
            mp[txt[i]]++;
        if (mp == MP)
            count++;
        int l = 0, r = Size2;
        while (r < Size)
        {
            mp[txt[l]]--;
            if (mp[txt[l]] == 0)
            {
                mp.erase(mp.find(txt[l]));
            }
            l++;
            mp[txt[r++]]++;
            if (mp == MP)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string pat, txt;
    cin >> txt >> pat;
    Solution s;
    cout << s.search(pat, txt);
    return 0;
}