// Date: 26-11-2024 at 23:03 BST
// Link:https://codeforces.com/problemset/problem/1729/C
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string S, SK;
    cin >> S;
    map<char, int> Mp;
    for (int i = 0; i < S.size(); i++)
    {
        Mp[S[i]].push(i + 1);
    }
    char first = S[0], last = S[S.size() - 1];
    bool flag = false;
    if (first > last)
    {
        swap(first, last);
        flag = true;
    }
    char check = first;
    sort(S.begin(), S.end());
    int ans = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if ((S[i] >= first && S[i] <= last))
        {
            SK.push_back(S[i]);
            int PW = check - 'a' + 1;
            int CW = S[i] - 'a' + 1;
            ans += abs(CW - PW);
            check = S[i];
        }
    }
    cout << ans << " " << SK.size() << endl;
    if (flag)
    {
        reverse(SK.begin(), SK.end());
    }
    for (auto chr : SK)
    {
        cout << Mp[chr].front() << " ";
        Mp[chr].pop();
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}